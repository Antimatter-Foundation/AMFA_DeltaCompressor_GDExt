//
// Created by vectorassembly on 9/9/24.
//

#ifndef AMFA_DELTACOMPRESSOR_GDEXT_AMFADELTA_H
#define AMFA_DELTACOMPRESSOR_GDEXT_AMFADELTA_H

#include <core/object.hpp>

class DeltaCompressor : public RefCounted {
    GDCLASS(DeltaCompressor, RefCounted)
protected:
    static void _bind_methods();
public:
    String get_version();

    DeltaCompressor();
};

#endif //AMFA_DELTACOMPRESSOR_GDEXT_AMFADELTA_H
