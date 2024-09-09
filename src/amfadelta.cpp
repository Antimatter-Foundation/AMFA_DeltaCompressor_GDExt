//
// Created by vectorassembly on 9/9/24.
//

#include "amfadelta.h"

void TTS::_bind_methods() {
    ClassDB::bind_method(D_METHOD("get_version"), &DeltaCompressor::get_version);
}