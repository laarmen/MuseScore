/*
 * SPDX-License-Identifier: GPL-3.0-only
 * MuseScore-CLA-applies
 *
 * MuseScore
 * Music Composition & Notation
 *
 * Copyright (C) 2021 MuseScore BVBA and others
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
#ifndef MU_ENGRAVING_WRITESCOREHOOK_H
#define MU_ENGRAVING_WRITESCOREHOOK_H

namespace mu::engraving {
class Score;
class XmlWriter;
}

namespace mu::engraving::rw400 {
class WriteContext;
}

namespace mu::engraving::compat {
class WriteScoreHook
{
public:
    WriteScoreHook() = default;

    void onWriteStyle302(Score* score, XmlWriter& xml);
    void onWriteExcerpts302(Score* score, XmlWriter& xml, rw400::WriteContext& ctx, bool selectionOnly);
};
}
#endif // MU_ENGRAVING_WRITESCOREHOOK_H
