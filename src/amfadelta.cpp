//
// Created by vectorassembly on 9/9/24.
//

#include "amfadelta.h"
#include <godot_cpp/core/class_db.hpp>
#include "delta.h"

using namespace godot;

void DeltaCompressor::_bind_methods() {
    //ClassDB::bind_method(D_METHOD("get_version"), &DeltaCompressor::get_version);
    ClassDB::bind_method(D_METHOD("get_diff"), &DeltaCompressor::diff);
}

DeltaCompressor::DeltaCompressor() {
    // Initialize any variables here

}

DeltaCompressor::~DeltaCompressor() {
    // Add your cleanup here.
}

PackedByteArray DeltaCompressor::diff(PackedByteArray old_data, PackedByteArray new_data) {
    const char *old = reinterpret_cast<const char *>(old_data.ptr());
    const char *new_ = reinterpret_cast<const char *>(new_data.ptr());
    char *delta;
    delta_create(old, sizeof(old), new_, sizeof(new_), delta);
    PackedByteArray output;
    output.resize(sizeof(delta));
    for (int i = 0; i < sizeof(delta); i++){
        output[i] = delta[i];
    }

    return output;
}