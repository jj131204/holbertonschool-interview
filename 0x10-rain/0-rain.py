#!/usr/bin/python3

"""
rain
"""


def rain(walls):
    left = water = lmax = rmax = 0
    right = len(walls) - 1

    while left < right:
        if walls[left] < walls[right]:
            if walls[left] < lmax:
                water += lmax - walls[left]
            else:
                lmax = walls[left]
            left += 1
        else:
            if walls[right] < rmax:
                water += rmax - walls[right]
            else:
                rmax = walls[right]
            right -= 1
    return water
