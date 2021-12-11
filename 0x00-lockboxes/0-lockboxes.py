#!/usr/bin/python3
"""python"""


def canUnlockAll(boxes):
    keys = [0]
    for i in keys:
        for j in boxes[i]:
            if j not in keys and j != i and j < len(boxes) and j != 0:
                keys.append(j)
    if len(keys) == len(boxes):
        return True
    else:
        return False
