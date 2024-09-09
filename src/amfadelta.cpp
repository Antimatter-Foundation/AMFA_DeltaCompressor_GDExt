//
// Created by vectorassembly on 9/9/24.
//

#include "amfadelta.h"
#include <godot_cpp/core/class_db.hpp>
#include <godot_cpp/variant/string.hpp>

#include "HDiffPatch/libHDiffPatch/HDiff/diff.h"
#include "HDiffPatch/libHDiffPatch/HPatch/patch.h"

using namespace godot;

void DeltaCompressor::_bind_methods() {
    //ClassDB::bind_method(D_METHOD("get_version"), &DeltaCompressor::get_version);
}

DeltaCompressor::DeltaCompressor() {
    // Initialize any variables here.
}

DeltaCompressor::~DeltaCompressor() {
    // Add your cleanup here.
}