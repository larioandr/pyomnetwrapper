from unittest import TestCase

import pyomnetwrapper as ow


class TestInitPy(TestCase):
    def test_say_hello(self):
        self.assertEqual("Ready to be developed!", ow.say_hello())
