#pragma once

namespace font_awesome {

    using Font = juce::Font;

    const Font &getFontRegular();
    const Font &getFontSolid();
    
    inline const Font &getFont(bool isSolid = false)
    {
        return isSolid ? getFontSolid() : getFontRegular();
    }

}
