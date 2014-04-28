#include "fatBinaryCtl.h"
#define __CUDAFATBINSECTION  ".nvFatBinSegment"
#define __CUDAFATBINDATASECTION  "__nv_relfatbin"
#ifdef __cplusplus
extern "C" {
#endif

#pragma data_seg(__CUDAFATBINDATASECTION)
static const __declspec(allocate(__CUDAFATBINDATASECTION)) unsigned long long fatbinData[]= {
0x00100001ba55ed50,0x0000000000001a88,0x000000a001010002,0x0000000000000490,
0x0000000000000000,0x0000001400010007,0x0000005f00000040,0x0000000000000045,
0x0000000000000000,0x0000000000000000,0x722f646c622f3a64,0x75706770672f6c65,
0x74696b6c6f6f742f,0x61732f352e35722f,0x5f302f73656c706d,0x732f656c706d6953,
0x706553656c706d69,0x6d6f436574617261,0x6e6f6974616c6970,0x44656c706d69732f,
0x62694c6563697665,0x0075632e79726172,0x33010102464c457f,0x0000000000000007,
0x0000000100be0001,0x0000000000000000,0x0000000000000000,0x0000000000000250,
0x0038004000140514,0x0001000900400000,0x7472747368732e00,0x747274732e006261,
0x746d79732e006261,0x747865742e006261,0x6c756d33315a5f2e,0x547942796c706974,
0x2e766e2e00666f77,0x65742e006f666e69,0x6431315a5f2e7478,0x5479426564697669,
0x2e766e2e00666f77,0x706172676c6c6163,0x72702e766e2e0068,0x00657079746f746f,
0x7472747368732e00,0x747274732e006261,0x746d79732e006261,0x6d33315a5f006261,
0x42796c7069746c75,0x742e00666f775479,0x33315a5f2e747865,0x796c7069746c756d,
0x2e00666f77547942,0x006f666e692e766e,0x6976696431315a5f,0x666f775479426564,
0x5f2e747865742e00,0x646976696431315a,0x00666f7754794265,0x2e766e2e00696923,
0x706172676c6c6163,0x72702e766e2e0068,0x00657079746f746f,0x0000000000000000,
0x0000000000000000,0x0000000000000000,0x000800030000002e,0x0000000000000000,
0x0000000000000000,0x0007000300000061,0x0000000000000000,0x0000000000000000,
0x000400030000007c,0x0000000000000000,0x0000000000000000,0x000600030000008a,
0x0000000000000000,0x0000000000000000,0x000800120000001b,0x0000000000000000,
0x0000000000000010,0x0007001200000050,0x0000000000000000,0x0000000000000010,
0xffffffff00000000,0xfffffffe00000000,0xfffffffd00000000,0x0000000600081104,
0x0008110400000000,0x0000000000000005,0x0000007800000005,0x0000007800000006,
0x5800cfc000411c00,0x9000000000001de7,0x5000000010411c00,0x9000000000001de7,
0x0000000000000000,0x0000000000000000,0x0000000000000000,0x0000000000000000,
0x0000000000000000,0x0000000000000000,0x0000000000000000,0x0000000000000000,
0x0000000300000001,0x0000000000000000,0x0000000000000000,0x0000000000000040,
0x0000000000000070,0x0000000000000000,0x0000000000000001,0x0000000000000000,
0x000000030000000b,0x0000000000000000,0x0000000000000000,0x00000000000000b0,
0x0000000000000098,0x0000000000000000,0x0000000000000001,0x0000000000000000,
0x0000000200000013,0x0000000000000000,0x0000000000000000,0x0000000000000148,
0x00000000000000a8,0x0000000400000002,0x0000000000000008,0x0000000000000018,
0x7000000100000054,0x0000000000000000,0x0000000000000000,0x00000000000001f0,
0x0000000000000018,0x0000000000000003,0x0000000000000004,0x0000000000000008,
0x7000000000000034,0x0000000000000000,0x0000000000000000,0x0000000000000208,
0x0000000000000018,0x0000000000000003,0x0000000000000004,0x0000000000000000,
0x7000000200000062,0x0000000000000000,0x0000000000000000,0x0000000000000220,
0x0000000000000010,0x0000000000000003,0x0000000000000004,0x0000000000000008,
0x000000010000003d,0x0000000000000006,0x0000000000000000,0x0000000000000230,
0x0000000000000010,0x0500000600000003,0x0000000000000004,0x0000000000000000,
0x000000010000001b,0x0000000000000006,0x0000000000000000,0x0000000000000240,
0x0000000000000010,0x0500000500000003,0x0000000000000004,0x0000000000000000,
0x000000b801010001,0x0000000000000150,0x0000004000000000,0x0000001400030002,
0x0000005f00000058,0x0000000000001045,0x0000000000000000,0x00000000000002d0,
0x0000000f00000048,0x6c69706d6f632d2d,0x0020796c6e6f2d65,0x722f646c622f3a64,
0x75706770672f6c65,0x74696b6c6f6f742f,0x61732f352e35722f,0x5f302f73656c706d,
0x732f656c706d6953,0x706553656c706d69,0x6d6f436574617261,0x6e6f6974616c6970,
0x44656c706d69732f,0x62694c6563697665,0x0075632e79726172,0x30c34b5d90a59c78,
0x03087fe857af8614,0x8a9956ed3492c361,0x46395db7795e2a17,0xa492d74c12d3db49,
0xf3a1db4f77fe2995,0xfbef3af9026a1763,0x05b4ef7dc75c7926,0x67700d2125b5646d,
0x8f81c65312c02e85,0x7c8d898c1a65915b,0x8c152e437acd1206,0xd319512ce7671938,
0x556cc375175158a0,0x3339d39e996947a9,0xd94bc7e61815aca2,0x0b42d425a7e998ad,
0xde2c254b5955370b,0x97b8532b42dcafbc,0x11ec66d3477a1689,0xc8c22c167441461e,
0x991a573c3168f323,0xd09929b66f342028,0x9dd203093424ae2e,0xf1253f942b6c1ac4,
0xddab595946cb0f03,0x1fb413e554f56ef5,0xc7e31abee20bbfc8,0x5e050d6a82f3aea7,
0x18babc32fc93da84,0x47b817d9486ca988,0x4aaaa26836a3c7d6,0xd120ebb8467c2709,
0x32280e3706f031bd,0xa9cafc3eb47523f6,0xc704f08a0144e9bf,0x06656c99e0835fd7,
0x8fc207ff2a7c30c7,0xf524021d16088741,0xfedf7e77879f8105,0xd2924600de75c240,
0x0000000000000098,0x000000a001010002,0x0000000000000570,0x0000000000000000,
0x0000001e00010007,0x0000005f00000040,0x0000000000000045,0x0000000000000000,
0x0000000000000000,0x722f646c622f3a64,0x75706770672f6c65,0x74696b6c6f6f742f,
0x61732f352e35722f,0x5f302f73656c706d,0x732f656c706d6953,0x706553656c706d69,
0x6d6f436574617261,0x6e6f6974616c6970,0x44656c706d69732f,0x62694c6563697665,
0x0075632e79726172,0x33010102464c457f,0x0000000000000007,0x0000000100be0001,
0x0000000000000000,0x0000000000000000,0x0000000000000330,0x00380040001e051e,
0x0001000900400000,0x7472747368732e00,0x747274732e006261,0x746d79732e006261,
0x747865742e006261,0x6c756d33315a5f2e,0x547942796c706974,0x2e766e2e00666f77,
0x65742e006f666e69,0x6431315a5f2e7478,0x5479426564697669,0x2e766e2e00666f77,
0x706172676c6c6163,0x72702e766e2e0068,0x00657079746f746f,0x7472747368732e00,
0x747274732e006261,0x746d79732e006261,0x6d33315a5f006261,0x42796c7069746c75,
0x742e00666f775479,0x33315a5f2e747865,0x796c7069746c756d,0x2e00666f77547942,
0x006f666e692e766e,0x6976696431315a5f,0x666f775479426564,0x5f2e747865742e00,
0x646976696431315a,0x00666f7754794265,0x2e766e2e00696923,0x706172676c6c6163,
0x72702e766e2e0068,0x00657079746f746f,0x0000000000000000,0x0000000000000000,
0x0000000000000000,0x000800030000002e,0x0000000000000000,0x0000000000000000,
0x0007000300000061,0x0000000000000000,0x0000000000000000,0x000400030000007c,
0x0000000000000000,0x0000000000000000,0x000600030000008a,0x0000000000000000,
0x0000000000000000,0x000800120000001b,0x0000000000000000,0x0000000000000080,
0x0007001200000050,0x0000000000000000,0x0000000000000080,0xffffffff00000000,
0xfffffffe00000000,0xfffffffd00000000,0x0000000600081104,0x0008110400000000,
0x0000000000000005,0x0000007800000005,0x0000007800000006,0x2002020202020287,
0x5800cfc000411c00,0x9000000000001de7,0x4000000000001de4,0x4000000000001de4,
0x4000000000001de4,0x4000000000001de4,0x4000000000001de4,0x4003ffffe0001de7,
0x4000000000001de4,0x4000000000001de4,0x4000000000001de4,0x4000000000001de4,
0x4000000000001de4,0x4000000000001de4,0x4000000000001de4,0x2002020202020287,
0x5000000010411c00,0x9000000000001de7,0x4000000000001de4,0x4000000000001de4,
0x4000000000001de4,0x4000000000001de4,0x4000000000001de4,0x4003ffffe0001de7,
0x4000000000001de4,0x4000000000001de4,0x4000000000001de4,0x4000000000001de4,
0x4000000000001de4,0x4000000000001de4,0x4000000000001de4,0x0000000000000000,
0x0000000000000000,0x0000000000000000,0x0000000000000000,0x0000000000000000,
0x0000000000000000,0x0000000000000000,0x0000000000000000,0x0000000300000001,
0x0000000000000000,0x0000000000000000,0x0000000000000040,0x0000000000000070,
0x0000000000000000,0x0000000000000001,0x0000000000000000,0x000000030000000b,
0x0000000000000000,0x0000000000000000,0x00000000000000b0,0x0000000000000098,
0x0000000000000000,0x0000000000000001,0x0000000000000000,0x0000000200000013,
0x0000000000000000,0x0000000000000000,0x0000000000000148,0x00000000000000a8,
0x0000000400000002,0x0000000000000008,0x0000000000000018,0x7000000100000054,
0x0000000000000000,0x0000000000000000,0x00000000000001f0,0x0000000000000018,
0x0000000000000003,0x0000000000000004,0x0000000000000008,0x7000000000000034,
0x0000000000000000,0x0000000000000000,0x0000000000000208,0x0000000000000018,
0x0000000000000003,0x0000000000000004,0x0000000000000000,0x7000000200000062,
0x0000000000000000,0x0000000000000000,0x0000000000000220,0x0000000000000010,
0x0000000000000003,0x0000000000000004,0x0000000000000008,0x000000010000003d,
0x0000000000000006,0x0000000000000000,0x0000000000000230,0x0000000000000080,
0x0500000600000003,0x0000000000000004,0x0000000000000000,0x000000010000001b,
0x0000000000000006,0x0000000000000000,0x00000000000002b0,0x0000000000000080,
0x0500000500000003,0x0000000000000004,0x0000000000000000,0x000000b801010001,
0x0000000000000150,0x0000004000000000,0x0000001e00030002,0x0000005f00000058,
0x0000000000001045,0x0000000000000000,0x00000000000002d0,0x0000000f00000048,
0x6c69706d6f632d2d,0x0020796c6e6f2d65,0x722f646c622f3a64,0x75706770672f6c65,
0x74696b6c6f6f742f,0x61732f352e35722f,0x5f302f73656c706d,0x732f656c706d6953,
0x706553656c706d69,0x6d6f436574617261,0x6e6f6974616c6970,0x44656c706d69732f,
0x62694c6563697665,0x0075632e79726172,0x30c34b5d90a59c78,0x0c387fe857af8614,
0x2a655b34d24b0d84,0x4872bcdde578a85e,0xe924b5d304b4db49,0xfce876d3ddff8a64,
0xbefbcebe409a85d8,0x48d93bdff3df1e49,0x39dc224e06bd5563,0x710f0956c0e94a61,
0x9eab136b48dcf22b,0x472d2850deb3c425,0x8d4e754d29f9c60c,0xaeaea5a6ca6cb4d4,
0x5a9cc9ccd472a3f5,0xd54b261a5a5a3551,0x11846ca5a7eda8ad,0x7870b4a355d55e4e,
0xb7932a372d72aef3,0x038ed6496cc2352a,0xe3c16893e28e3c60,0x2ab2ae7862f1e600,
0x909833aed14812d5,0x93ba08f29202ae2e,0x72429c3a11b748c4,0xbdbd1aa76ad578cf,
0x7bed04c5d53ddedc,0xf1f826afa482eff2,0x2f12c8daa0bdefa9,0x06ce2fce7151ed42,
0xc0160576521f3a62,0x33ae889a03d470ea,0xee890f7cc066c060,0x75914071b830518c,
0xc38e57fed5a3a91f,0x7c704f08a1144e87,0xe5ca8dab960835fd,0x63f081ffca9f0c21,
0x7d49008745823ed0,0x1fdbec26fc161041,0x99d23d491bdef848,0x0000000000000000,
0x000000a001010002,0x00000000000007f8,0x0000000000000000,0x0000002300010007,
0x0000005f00000040,0x0000000000000045,0x0000000000000000,0x0000000000000000,
0x722f646c622f3a64,0x75706770672f6c65,0x74696b6c6f6f742f,0x61732f352e35722f,
0x5f302f73656c706d,0x732f656c706d6953,0x706553656c706d69,0x6d6f436574617261,
0x6e6f6974616c6970,0x44656c706d69732f,0x62694c6563697665,0x0075632e79726172,
0x33010102464c457f,0x0000000000000007,0x0000000100be0001,0x0000000000000000,
0x0000000000000000,0x0000000000000538,0x0038004000230523,0x0001000b00400000,
0x7472747368732e00,0x747274732e006261,0x746d79732e006261,0x747865742e006261,
0x6c614d616475632e,0x2e766e2e00636f6c,0x65742e006f666e69,0x46616475632e7478,
0x7441746547636e75,0x7365747562697274,0x5f2e747865742e00,0x69746c756d33315a,
0x6f77547942796c70,0x2e747865742e0066,0x6976696431315a5f,0x666f775479426564,
0x6c61632e766e2e00,0x2e0068706172676c,0x6f746f72702e766e,0x732e000065707974,
0x0062617472747368,0x006261747274732e,0x006261746d79732e,0x6c6c614d61647563,
0x747865742e00636f,0x6c614d616475632e,0x2e766e2e00636f6c,0x647563006f666e69,
0x746547636e754661,0x7475626972747441,0x747865742e007365,0x6e7546616475632e,
0x7274744174654763,0x5f00736574756269,0x69746c756d33315a,0x6f77547942796c70,
0x2e747865742e0066,0x746c756d33315a5f,0x77547942796c7069,0x6431315a5f00666f,
0x5479426564697669,0x7865742e00666f77,0x696431315a5f2e74,0x7754794265646976,
0x230069692300666f,0x2e766e2e006c6c69,0x706172676c6c6163,0x72702e766e2e0068,
0x00657079746f746f,0x0000000000000000,0x0000000000000000,0x0000000000000000,
0x000900220000001b,0x0000000000000000,0x0000000000000080,0x0009000300000026,
0x0000000000000000,0x0000000000000000,0x0008002200000040,0x0000000000000000,
0x0000000000000080,0x0008000300000056,0x0000000000000000,0x0000000000000000,
0x0007000300000085,0x0000000000000000,0x0000000000000000,0x000a0003000000af,
0x0000000000000000,0x0000000000000000,0x00050003000000cf,0x0000000000000000,
0x0000000000000000,0x00060003000000dd,0x0000000000000000,0x0000000000000000,
0x0007001200000072,0x0000000000000000,0x0000000000000080,0x000a00120000009e,
0x0000000000000000,0x0000000000000080,0x0000000a00081104,0x0008110400000000,
0x0000000000000009,0x0000000300081104,0x0008110400000000,0x0000000000000001,
0xffffffff00000000,0xfffffffe00000000,0xfffffffd00000000,0x000000ca00000001,
0x000000ca00000003,0x000000c600000009,0x000000c60000000a,0x08008080808080a0,
0xe2c00000021c1012,0x19000000001c003c,0x85800000001c3c02,0x85800000001c3c02,
0x85800000001c3c02,0x85800000001c3c02,0x85800000001c3c02,0x12007ffffc1c003c,
0x85800000001c3c02,0x85800000001c3c02,0x85800000001c3c02,0x85800000001c3c02,
0x85800000001c3c02,0x85800000001c3c02,0x85800000001c3c02,0x08008080808080a0,
0x740000000f1fc012,0x19000000001c003c,0x85800000001c3c02,0x85800000001c3c02,
0x85800000001c3c02,0x85800000001c3c02,0x85800000001c3c02,0x12007ffffc1c003c,
0x85800000001c3c02,0x85800000001c3c02,0x85800000001c3c02,0x85800000001c3c02,
0x85800000001c3c02,0x85800000001c3c02,0x85800000001c3c02,0x08008080808080a0,
0x740000000f1fc012,0x19000000001c003c,0x85800000001c3c02,0x85800000001c3c02,
0x85800000001c3c02,0x85800000001c3c02,0x85800000001c3c02,0x12007ffffc1c003c,
0x85800000001c3c02,0x85800000001c3c02,0x85800000001c3c02,0x85800000001c3c02,
0x85800000001c3c02,0x85800000001c3c02,0x85800000001c3c02,0x08008080808080a0,
0xc34001f8001c1011,0x19000000001c003c,0x85800000001c3c02,0x85800000001c3c02,
0x85800000001c3c02,0x85800000001c3c02,0x85800000001c3c02,0x12007ffffc1c003c,
0x85800000001c3c02,0x85800000001c3c02,0x85800000001c3c02,0x85800000001c3c02,
0x85800000001c3c02,0x85800000001c3c02,0x85800000001c3c02,0x0000000000000000,
0x0000000000000000,0x0000000000000000,0x0000000000000000,0x0000000000000000,
0x0000000000000000,0x0000000000000000,0x0000000000000000,0x0000000300000001,
0x0000000000000000,0x0000000000000000,0x0000000000000040,0x000000000000009d,
0x0000000000000000,0x0000000000000001,0x0000000000000000,0x000000030000000b,
0x0000000000000000,0x0000000000000000,0x00000000000000dd,0x00000000000000eb,
0x0000000000000000,0x0000000000000001,0x0000000000000000,0x0000000200000013,
0x0000000000000000,0x0000000000000000,0x00000000000001c8,0x0000000000000108,
0x0000000800000002,0x0000000000000008,0x0000000000000018,0x700000000000002c,
0x0000000000000000,0x0000000000000000,0x00000000000002d0,0x0000000000000030,
0x0000000000000003,0x0000000000000004,0x0000000000000000,0x7000000100000081,
0x0000000000000000,0x0000000000000000,0x0000000000000300,0x0000000000000018,
0x0000000000000003,0x0000000000000004,0x0000000000000008,0x700000020000008f,
0x0000000000000000,0x0000000000000000,0x0000000000000318,0x0000000000000020,
0x0000000000000003,0x0000000000000004,0x0000000000000008,0x0000000100000051,
0x0000000000000006,0x0000000000000000,0x0000000000000338,0x0000000000000080,
0x0500000900000003,0x0000000000000004,0x0000000000000000,0x0000000100000035,
0x0000000000000006,0x0000000000000000,0x00000000000003b8,0x0000000000000080,
0x0800000300000003,0x0000000000000004,0x0000000000000000,0x000000010000001b,
0x0000000000000006,0x0000000000000000,0x0000000000000438,0x0000000000000080,
0x0800000100000003,0x0000000000000004,0x0000000000000000,0x000000010000006a,
0x0000000000000006,0x0000000000000000,0x00000000000004b8,0x0000000000000080,
0x0500000a00000003,0x0000000000000004,0x0000000000000000,0x000000b801010001,
0x00000000000001e8,0x0000004000000000,0x0000002300030002,0x0000005f00000058,
0x0000000000001045,0x0000000000000000,0x0000000000000523,0x0000000f00000048,
0x6c69706d6f632d2d,0x0020796c6e6f2d65,0x722f646c622f3a64,0x75706770672f6c65,
0x74696b6c6f6f742f,0x61732f352e35722f,0x5f302f73656c706d,0x732f656c706d6953,
0x706553656c706d69,0x6d6f436574617261,0x6e6f6974616c6970,0x44656c706d69732f,
0x62694c6563697665,0x0075632e79726172,0x409c6b5d53b59c78,0x502187fec2ce7d14,
0x136eeab38e8ca848,0xa7929e697d20fd0a,0xae321db8ce8c8266,0x57bdffa5b61a3332,
0x05529a1b76498357,0x388e7b9ef73dce3f,0x55634adc4e1fcd9f,0x59b8e6f0871441b5,
0xb95e08d2996c874b,0xa243f55a9b5a4610,0x8223cb4a1437d178,0x5237c2d33f3bc58e,
0x2aabbe375d7aebfb,0x96f91c226f9ca77d,0xd52bd20fd696b597,0x1b9ac95dbfb6f93d,
0x0ee695acaaa7e4ee,0x7e5caad967ca8794,0xd8e6f38b66e19955,0x1a2b849c61c68443,
0x69d876a3578a287b,0xbd633a818ce20633,0x6300b0803e83633c,0xae4da980fa782379,
0x69a962f45807211b,0xdfc2b5e532954e36,0x0b9649644684c17b,0x25ef7ef492c9250f,
0xc13a393668b843bf,0x87510d19c225f6dd,0x7514e0eb96ba46a4,0x3d027e55d6b92f63,
0xa68f690a4c5e2d23,0xb3e74f640102f781,0xad05b08d7232c09f,0x62fbb67f7c3ce637,
0x688788c7a6e2d565,0x475add79bb75a800,0x475eb706debdd337,0x4638a21401061204,
0xd2febf4032833e74,0x9ce0fba45f2005df,0x19f563dda4e35951,0x006bff710fae0fe7,
0xb4caacab401a7909,0xa365a11bf483397c,0xbefaf6e3f6f5aa9d,0x746139fd0001a62a,
0xd39c5f6dd151d8ff,0xd802bbfec31691d1,0x1042f476ea3c39ba,0x31a1d27e0ac82059,
0xec52a69970dd76f4,0x11041f5ecf08a54f,0xf951e18a1e4255aa,0xaac11a683bd8425f,
0xd05041127a92008b,0xf67cc4915e3fa08b,0x000000e6861f781b
};
#pragma data_seg()

#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#endif
#pragma data_seg(".nvFatBinSegment")
#undef __FATIDNAME_CORE
#undef __FATIDNAME
#define __FATIDNAME_CORE(x) __fatbinwrap##x
#define __FATIDNAME(x) __FATIDNAME_CORE(x)
__declspec(allocate(__CUDAFATBINSECTION)) __declspec(align(8)) extern const __fatBinC_Wrapper_t __FATIDNAME(__NV_MODULE_ID)= 
	{ 0x466243b1, 1, fatbinData, 0 };
#pragma data_seg()
#ifdef __cplusplus
}
#endif
