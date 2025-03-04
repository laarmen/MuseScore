/*
 * SPDX-License-Identifier: GPL-3.0-only
 * MuseScore-CLA-applies
 *
 * MuseScore
 * Music Composition & Notation
 *
 * Copyright (C) 2022 MuseScore BVBA and others
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 3 as
 * published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <https://www.gnu.org/licenses/>.
 */

#ifndef MU_ENGRAVING_FILTERBASE_H
#define MU_ENGRAVING_FILTERBASE_H

#include "log.h"

#include "playback/renderingcontext.h"

namespace Ms {
class EngravingItem;
}

namespace mu::engraving {
template<class T>
class FilterBase
{
public:
    static bool isItemPlayable(const EngravingItem* item, const RenderingContext& ctx)
    {
        IF_ASSERT_FAILED(item) {
            return false;
        }

        return T::isPlayable(item, ctx);
    }
};
}

#endif // MU_ENGRAVING_FILTERBASE_H
