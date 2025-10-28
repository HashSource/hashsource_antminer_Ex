int __fastcall open_cores_by_work_num_rvn(int a1)
{
  int v2; // r0
  int *v3; // r9
  void *v4; // r6
  __int64 v5; // kr00_8
  int v6; // r4
  int v7; // r1
  int v8; // r2
  int v9; // r3
  int v10; // r1
  int v11; // r2
  int v12; // r3
  int v13; // r2
  _DWORD v15[8]; // [sp+18h] [bp-1024h] BYREF
  _BYTE v16[1024]; // [sp+38h] [bp-1004h] BYREF
  int v17; // [sp+438h] [bp-C04h] BYREF

  V_LOCK(a1);
  v2 = logfmt_raw((int)v16, 0x1000u);
  V_UNLOCK(v2);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
    "n_godminer-new/backend/backend_rvn_2020/backend_rvn_2020.c",
    174,
    "open_cores_by_work_num_rvn",
    26,
    742,
    20,
    v16);
  memcpy(
    v16,
    "ab77b2cb3d32b0b61304401cbe540448a4cacd7e98421a850503e2f0d102f1d304538f55a2595ec9fd64fe3c70b2e579f1490e8eb12ec48a70ee"
    "501bf2930097045d377c49bb1c0e655a091dc7c79d5c133ad1d7144019a1f460d1e5d49bab6304856cb540073d8cf3af0773bc7c065a702b8879"
    "33e7151ff49cec6ce4944c1f04a96035d0965fef04d7d744a67aeccb544a7610909ba9406ec1f748b4bd328404c4de9eefc1093f302f8f6bfd00"
    "674432cf9f65dfea05237ccf453023f68213055397e181e5a9fbb544d422ae4a081c3d2acae97ce1cb514b832b214216aa7b05956f136d0e734a"
    "8d27727133d13da8d3b123a9baf3b4fb5269bfe51f307e4e056fcd2ebd21f3b43fa9fe06971ca50435ffde75a2be1ee2ee5dae1243c447efde4e"
    "543daf963dbea12fbb9d1707e8c07a9e3e03b75bb663eacacae3dc1f043bef3ae4e823ea64e48e919d5848c85590c035580b4db4e98543ddc3c3"
    "a4165c86c8399ba01a5e966c1c627ae9dff4aa8190fdb60544eac6be771edd4bca9c12d5e777ec8538b5a488470d9828029106e28686b0cb8b56"
    "745364a17f0cf29f70b1d8c83f500dd7c8b57fb772c83e77481b68e4c578c3a11e1dd937302d3fd1da60cd406c85d4845e866451746895394912"
    "c851a8b84eddf42356e6dbccdc582de589e03aa396771b661fbd854365b3400d6fe3434ed512083a36ee6943018127e3disable_cores_rvn",
    sizeof(v16));
  v3 = (int *)v16;
  sub_92A5C(a1, 29, 0);
  v4 = calloc(1u, 0x59u);
  v5 = 0;
  do
  {
    v6 = 1;
    str2hex((int)v15, (int)v3, 64);
    memset(v4, 0, 0x59u);
    v7 = v15[1];
    v8 = v15[2];
    v9 = v15[3];
    *((_DWORD *)v4 + 4) = v15[0];
    *((_DWORD *)v4 + 5) = v7;
    *((_DWORD *)v4 + 6) = v8;
    *((_DWORD *)v4 + 7) = v9;
    v10 = v15[5];
    v11 = v15[6];
    v12 = v15[7];
    *((_DWORD *)v4 + 8) = v15[4];
    *((_DWORD *)v4 + 9) = v10;
    *((_DWORD *)v4 + 10) = v11;
    *((_DWORD *)v4 + 11) = v12;
    *((_QWORD *)v4 + 1) = v5;
    do
    {
      v13 = v6++;
      sub_92A5C(a1, 29, v13);
      push_work_base(a1, v4);
      usleep((__useconds_t)sub_30D40);
    }
    while ( v6 != 65 );
    v3 += 16;
    v5 += 2;
  }
  while ( &v17 != v3 );
  free(v4);
  return 0;
}
