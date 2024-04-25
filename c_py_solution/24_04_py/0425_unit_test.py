import unittest
from beginner_0425 import test_case


class UnitTest0425(unittest.TestCase):
    def test_numbers(self):
        self.assertEqual(test_case(1000, 3), '02')
        self.assertEqual(test_case(23442, 75), '00')
        self.assertEqual(test_case(428392, 17), '15')
        self.assertEqual(test_case(32442, 99), '72')


if __name__ == '__main__':
    unittest.main()