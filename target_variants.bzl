la_targets = [
    # keep sorted
]

la_variants = [
    # keep sorted
]

lxc_variants = [
    # keep sorted
]

lxc_targets = [
    # keep sorted
]

le_32_targets = [
    # keep sorted
    "mdm9607",
]

le_32_variants = [
    # keep sorted
    "debug-defconfig",
    "perf-defconfig",
]

le_targets = [
    # keep sorted
]

le_variants = [
    # keep sorted
]

vm_types = [
]

vm_target_bases = [
]

vm_targets = ["{}-{}".format(t, vt) for t in vm_target_bases for vt in vm_types]

vm_variants = [
    # keep sorted
]

def get_all_la_variants():
    return [(t, v) for t in la_targets for v in la_variants]

def get_all_le_variants():
    return [(t, v) for t in le_targets for v in le_variants]

def get_all_le_32_variants():
    return [(t, v) for t in le_32_targets for v in le_32_variants]

def get_all_lxc_variants():
    return [(t, v) for t in lxc_targets for v in lxc_variants]

def get_all_vm_variants():
    return [(t, v) for t in vm_targets for v in vm_variants]

def get_all_variants():
    return get_all_la_variants() + get_all_le_variants() + get_all_le_32_variants() + get_all_lxc_variants() + get_all_vm_variants()
