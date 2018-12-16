/**
 * BSD 3-Clause License
 *
 * Copyright (c) 2018, Nantha Kumar Sunder, Nithish Sanjeev Kumar
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:

 * * Redistributions of source code must retain the above copyright notice, this
 * list of conditions and the following disclaimer.

 * * Redistributions in binary form must reproduce the above copyright notice,
 *  this list of conditions and the following disclaimer in the documentation
 * and/or other materials provided with the distribution.
 *
 * * Neither the name of the copyright holder nor the names of its
 *  contributors may be used to endorse or promote products derived from
 *  this software without specific prior written permission.

 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
 * DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE
 * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
 * SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
 * CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
 * OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
 * OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

/**@file testExplore.cpp
 *
 * @brief To test the class explore
 *
 * @driver Nithish Sanjeev Kumar
 * @navigator Nantha Kumar Sunder
 * @copyright 2018 , Nantha Kumar Sunder, Nithish Sanjeev Kumar All rights reserved

 */
#include <gtest/gtest.h>
#include <ros/ros.h>
#include <vector>
#include <queue>
#include "map.hpp"
#include "explore.hpp"

TEST(findObstacleFreeNeighbours, ToFindTheObtacleFreeNeighbours) {
  // Creating a bfs object
  map obj1;
  explore ObjExp;
  std::queue<std::vector<int>> list;
  std::vector<int> tempVec, v;

  tempVec.push_back(2);
  tempVec.push_back(0);

  ObjExp.findObstacleFreeNeighbours(tempVec, list, obj1);
  tempVec = list.front();
  v = {1, 0};
  ASSERT_EQ(tempVec, v);
}

TEST(computeShortestPath, checkReturnValue) {
  map objMap;
  explore objExp;
  std::vector<std::vector<int>> list;
  std::vector<int> a, b;
  a.push_back(2);
  a.push_back(0);
  b.push_back(0);
  b.push_back(0);
  EXPECT_EQ(1, objExp.computeShortestPath(a, b, list, objMap));
}