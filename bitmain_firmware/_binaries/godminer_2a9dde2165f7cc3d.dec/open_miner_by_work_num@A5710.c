int __fastcall open_miner_by_work_num(int a1)
{
  int v2; // r0
  _DWORD *v3; // r0
  _DWORD *v4; // r5
  int *v5; // r9
  void *v6; // r11
  char *v7; // r6
  char v8; // r4
  int v9; // r1
  void *v11; // [sp+14h] [bp-1448h]
  _BYTE v12[140]; // [sp+1Ch] [bp-1440h] BYREF
  _BYTE dest[5040]; // [sp+A8h] [bp-13B4h] BYREF
  int v14; // [sp+1458h] [bp-4h] BYREF

  V_LOCK(a1);
  v2 = logfmt_raw((int)dest, 0x1000u);
  V_UNLOCK(v2);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
    "n_godminer-new/backend/backend_zec_1746/backend_zec_1746.c",
    174,
    "open_miner_by_work_num",
    22,
    663,
    20,
    dest);
  memcpy(dest, &unk_151E38, sizeof(dest));
  v3 = calloc(1u, 0xD8u);
  v11 = v3 + 10;
  v4 = v3;
  v5 = (int *)dest;
  v6 = v3 + 46;
  v7 = (char *)v3 + 7;
  v8 = 0;
  do
  {
    v9 = (int)v5;
    v5 += 70;
    str2hex((int)v12, v9, 280);
    memset(v4, 0, 0xB4u);
    memcpy(v11, v12, 0x8Cu);
    *++v7 = v8;
    v4[45] = 22;
    *(_DWORD *)(a1 + 460) = 1;
    memset(v6, 255, 0x20u);
    push_work_base(a1, v4);
    usleep((__useconds_t)sub_30D40);
    v8 += 2;
  }
  while ( v5 != &v14 );
  free(v4);
  return 0;
}
