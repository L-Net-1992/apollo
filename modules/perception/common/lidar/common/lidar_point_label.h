/******************************************************************************
 * Copyright 2018 The Apollo Authors. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *****************************************************************************/
#pragma once

namespace apollo {
namespace perception {
namespace lidar {

enum class LidarPointLabel {
  UNKNOWN = 0,
  ROI = 1,
  GROUND = 2,
  OBJECT = 3,
  MAX_LABEL,
};  // enum class LidarPointLabel

enum class PointSemanticLabel {
  UNKNOWN = 0,
  IGNORE = 1,
  GROUND = 2,
  OBJECT = 3,
  CURB = 4,
  VEGETATION = 5,
  FENCE = 6,
  NOISE = 7,
  WALL = 8,
  MAX_LABEL,
};  // enum class PointSemanticLabel

enum class PointMotionLabel {
  UNKNOWN = 0,
  STATIC = 1,
  DYNAMIC = 2,
  MAX_LABEL,
};  // enum class PointMotionLabel

}  // namespace lidar
}  // namespace perception
}  // namespace apollo
