from unittest import TestCase
import os

import pyomnetwrapper as ow


ROOT = os.path.join(os.path.dirname(__file__), '..')
DATA_PATH = os.path.join(ROOT, 'samples', 'data')

class TestHelloUsage(TestCase):
    def test_it(self):
        self.assertEqual("Ready to be developed!", ow.say_hello())


class TestAloha(TestCase):
    def test_number_of_files(self):
        aloha_path = os.path.join(DATA_PATH, 'aloha')
        file_names = [name for name in os.listdir(aloha_path)
                      if os.path.isfile(os.path.join(aloha_path, name))]
        num_files = len(file_names)
        self.assertEqual(44, num_files)
