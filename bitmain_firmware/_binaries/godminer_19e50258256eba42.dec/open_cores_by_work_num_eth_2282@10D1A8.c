int __fastcall open_cores_by_work_num_eth_2282(int a1)
{
  _DWORD *v1; // lr
  int v2; // r1
  int v3; // r2
  int v4; // r3
  int v5; // r1
  int v6; // r2
  int v7; // r3
  _BYTE v10[48]; // [sp+1Ch] [bp-1430h] BYREF
  _DWORD v11[8]; // [sp+101Ch] [bp-430h] BYREF
  _BYTE v12[1024]; // [sp+103Ch] [bp-410h] BYREF
  void *s; // [sp+143Ch] [bp-10h]
  unsigned int j; // [sp+1440h] [bp-Ch]
  unsigned int i; // [sp+1444h] [bp-8h]

  V_LOCK();
  logfmt_raw(v10, 0x1000u, 0, "%s...", "open_cores_by_work_num_eth_2282");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_eth_2282/backend_eth_2282.c",
    171,
    "open_cores_by_work_num_eth_2282",
    31,
    944,
    20,
    v10);
  memcpy(
    v12,
    "ab77b2cb3d32b0b61304401cbe540448a4cacd7e98421a850503e2f0d102f1d304538f55a2595ec9fd64fe3c70b2e579f1490e8eb12ec48a70ee"
    "501bf2930097045d377c49bb1c0e655a091dc7c79d5c133ad1d7144019a1f460d1e5d49bab6304856cb540073d8cf3af0773bc7c065a702b8879"
    "33e7151ff49cec6ce4944c1f04a96035d0965fef04d7d744a67aeccb544a7610909ba9406ec1f748b4bd328404c4de9eefc1093f302f8f6bfd00"
    "674432cf9f65dfea05237ccf453023f68213055397e181e5a9fbb544d422ae4a081c3d2acae97ce1cb514b832b214216aa7b05956f136d0e734a"
    "8d27727133d13da8d3b123a9baf3b4fb5269bfe51f307e4e056fcd2ebd21f3b43fa9fe06971ca50435ffde75a2be1ee2ee5dae1243c447efde4e"
    "543daf963dbea12fbb9d1707e8c07a9e3e03b75bb663eacacae3dc1f043bef3ae4e823ea64e48e919d5848c85590c035580b4db4e98543ddc3c3"
    "a4165c86c8399ba01a5e966c1c627ae9dff4aa8190fdb60544eac6be771edd4bca9c12d5e777ec8538b5a488470d9828029106e28686b0cb8b56"
    "745364a17f0cf29f70b1d8c83f500dd7c8b57fb772c83e77481b68e4c578c3a11e1dd937302d3fd1da60cd406c85d4845e866451746895394912"
    "c851a8b84eddf42356e6dbccdc582de589e03aa396771b661fbd854365b3400d6fe3434ed512083a36ee6943018127e3asic %02x core %02x "
    "header %s nonce %016llx mixhash %s",
    sizeof(v12));
  sub_106D34(a1, 21, 0);
  s = calloc(1u, 0x59u);
  for ( i = 0; i <= 0xF; ++i )
  {
    str2hex((int)v11, (int)&v12[64 * i], 64);
    memset(s, 0, 0x59u);
    v1 = (char *)s + 16;
    v2 = v11[1];
    v3 = v11[2];
    v4 = v11[3];
    *((_DWORD *)s + 4) = v11[0];
    v1[1] = v2;
    v1[2] = v3;
    v1[3] = v4;
    v5 = v11[5];
    v6 = v11[6];
    v7 = v11[7];
    v1[4] = v11[4];
    v1[5] = v5;
    v1[6] = v6;
    v1[7] = v7;
    *((_QWORD *)s + 1) = (int)(2 * i);
    for ( j = 1; j <= 0x40; ++j )
    {
      sub_106D34(a1, 21, j);
      push_work_base(a1, (int)s);
      usleep(0x30D40u);
    }
  }
  if ( s )
    free(s);
  return 0;
}
