/*
 * Copyright (c) Meta Platforms, Inc. and affiliates.
 *
 * This source code is licensed under the MIT license found in the
 * LICENSE file in the root directory of this source tree.
 */

#include "ABI45_0_0ImageState.h"

namespace ABI45_0_0facebook {
namespace ABI45_0_0React {

ImageSource ImageState::getImageSource() const {
  return imageSource_;
}

ImageRequest const &ImageState::getImageRequest() const {
  return *imageRequest_;
}

Float ImageState::getBlurRadius() const {
  return blurRadius_;
}

} // namespace ABI45_0_0React
} // namespace ABI45_0_0facebook
