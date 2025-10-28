int __fastcall check_nonce_dash(int a1, int a2)
{
  int v2; // r9
  int v4; // r4
  unsigned int v5; // r7
  int v6; // r12
  _BYTE *v7; // r2
  char *v8; // r3
  char v9; // r1
  unsigned int v10; // r0
  int v11; // r0
  unsigned int v13; // r3
  int v14; // r0
  int v15; // r0
  _BYTE v16[32]; // [sp+18h] [bp-1070h] BYREF
  _DWORD v17[20]; // [sp+38h] [bp-1050h] BYREF
  _BYTE v18[4096]; // [sp+88h] [bp-1000h] BYREF

  v2 = *(_DWORD *)(a1 + 784);
  v4 = *(unsigned __int8 *)(a2 + 53);
  v5 = *(_DWORD *)(v2 + 4 * (v4 + 3840));
  ++dword_185224;
  v6 = *(_DWORD *)(v2 + 12 * v4 + 19968);
  *(_DWORD *)(a2 + 58) = *(_DWORD *)(v2 + 12 * v4 + 19972);
  *(_DWORD *)(a2 + 54) = v6;
  memcpy(v17, (const void *)(v2 + 80 * v4 + 5120), sizeof(v17));
  v7 = v17;
  v8 = (char *)(v2 + 80 * v4 + 5120);
  do
  {
    v9 = *v8;
    v8 += 4;
    v7[3] = v9;
    v7[2] = *(v8 - 3);
    v7[1] = *(v8 - 2);
    *v7 = *(v8 - 1);
    v7 += 4;
  }
  while ( v7 != v18 );
  v17[19] = *(_DWORD *)(a2 + 48);
  Xhash(v16, v17);
  v10 = target_to_diff_dash((int)v16);
  if ( v10 <= 0x22 )
  {
    ++dword_185228;
    V_LOCK(v10);
    v11 = logfmt_raw((int)v18, 0x1000u);
    V_UNLOCK(v11);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
      "gin_godminer-new/backend/backend_dash_1766/backend_dash_1766.c",
      176,
      "check_nonce_dash",
      16,
      790,
      20,
      v18);
    return 2;
  }
  v13 = *(unsigned __int8 *)(a2 + 52);
  if ( v13 == v10 )
  {
    if ( v5 <= v13 )
      return 0;
    V_LOCK(v10);
    v14 = logfmt_raw((int)v18, 0x1000u);
    V_UNLOCK(v14);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
      "gin_godminer-new/backend/backend_dash_1766/backend_dash_1766.c",
      176,
      "check_nonce_dash",
      16,
      823,
      20,
      v18);
    return 1;
  }
  else
  {
    if ( v5 <= v10 )
      return 0;
    V_LOCK(v10);
    v15 = logfmt_raw((int)v18, 0x1000u);
    V_UNLOCK(v15);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
      "gin_godminer-new/backend/backend_dash_1766/backend_dash_1766.c",
      176,
      "check_nonce_dash",
      16,
      800,
      20,
      v18);
    return 3;
  }
}
