class Words(object):
    def __init__(self, word, mean, synonym):
        self.left = self.right = None
        self.word = word
        self.mean = mean
        self.synonym = synonym


class BinarySearchTree(object):
    def __init__(self):
        self.root = None

    def insert(self, word, mean, synonym):
        self.root = self._insert_value(self.root, word, mean, synonym)
        return self.root is not None

    def _insert_value(self, node, word, mean, synonym):
        if node is None:
            node = Words(word, mean, synonym)
        else:
            if word <= node.word:
                node.left = self._insert_value(node.left, word, mean, synonym)
            else:
                node.right = self._insert_value(node.right, word, mean, synonym)
        return node

    def find(self, key):
        return self._find_value(self.root, key)

    def _find_value(self, root, key, swit=False):
        if root is None or root.word == key:
            if swit:
                return {
                    "word": root.word,
                    "mean": root.mean,
                    "synonym": root.synonym
                }
            else:
                return root is not None
        elif key < root.word:
            return self._find_value(root.left, key)
        else:
            return self._find_value(root.right, key)

    def find_es(self, key):
        return self._find_value(self.root, key, swit=True)

    def delete(self, key):
        self.root, deleted = self._delete_value(self.root, key)
        return deleted

    def _delete_value(self, node, key):
        if node is None:
            return node, False

        deleted = False
        if key == node.word:
            deleted = True
            if node.left and node.right:
                parent, child = node, node.right
                while child.left is not None:
                    parent, child = child, child.left
                child.left = node.left
                if parent != node:
                    parent.left = child.right
                    child.right = node.right
                node = child
            elif node.left or node.right:
                node = node.left or node.right
            else:
                node = None
        elif key < node.word:
            node.left, deleted = self._delete_value(node.left, key)
        else:
            node.right, deleted = self._delete_value(node.right, key)
        return node, deleted

    def pre_order_treversal(self):
        def _pre_order_traversal(root):
            if root is None:
                return False
            else:
                print("----------------------------")
                print("단어   | " + str(root.word))
                print("뜻    | " + str(root.mean))
                print("동의어  | " + str(root.synonym))
                print("----------------------------")
                _pre_order_traversal(root.left)
                _pre_order_traversal(root.right)
        _pre_order_traversal(self.root)
