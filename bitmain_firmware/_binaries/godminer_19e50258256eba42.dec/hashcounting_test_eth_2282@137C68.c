int __fastcall hashcounting_test_eth_2282(int a1, int a2)
{
  int (**v2)(); // r0
  int (**v3)(); // r0
  int v4; // r3
  int (**v5)(); // r0
  int (**v6)(); // r0
  _BYTE v10[4096]; // [sp+1Ch] [bp-1018h] BYREF
  int v11; // [sp+101Ch] [bp-18h]
  int v12; // [sp+1020h] [bp-14h]
  void *ptr; // [sp+1024h] [bp-10h]

  ptr = malloc(0x48u);
  if ( !a2 )
  {
    V_LOCK();
    logfmt_raw(v10, 0x1000u, 0, "etc hashcounting test!!!");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/backend_eth_2282/backend_eth_2282.c",
      171,
      "hashcounting_test_eth_2282",
      26,
      8393,
      40,
      v10);
    memset(v10, 0, 0x2Eu);
    str2hex(
      (int)v10,
      (int)"55aa30007e206fe85a0f611c62bb2ab50ef62c91633447235b2d5e4ff37fddb03d279aed002101380a5cf6cd2e17",
      92);
    sub_106BA8(a1, 40, 1198372);
    sub_1062CC(a1, 24, ptr);
    do
      v2 = dev_ctrl();
    while ( (unsigned int)((int (__fastcall *)(_DWORD))v2[22])(*(_DWORD *)(a1 + 264)) <= 0x2D );
    v3 = dev_ctrl();
    v12 = ((int (__fastcall *)(_DWORD, _BYTE *, int))v3[16])(*(_DWORD *)(a1 + 264), v10, 46);
    if ( ptr )
      free(ptr);
    usleep(0xC350u);
    sub_1062CC(a1, 24, ptr);
  }
  v4 = a2;
  if ( a2 == 1 )
  {
    V_LOCK();
    logfmt_raw(v10, 0x1000u, 0, "iron hashcounting test!!!");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/backend_eth_2282/backend_eth_2282.c",
      171,
      "hashcounting_test_eth_2282",
      26,
      8412,
      40,
      v10);
    memset(v10, 0, 0xBAu);
    str2hex(
      (int)v10,
      (int)"55aa200233f58b0069020000000607ae00000000060000007ae8fef1021fd8465aea94bd914c6e9b89f3810aed57e06d466b74ddde931"
           "55fb81f7cd860b1d361d2567192a1cda097926ef57a500f8a0b54d58a1920fb12737a7da0f0b73786f47a91696b60c4e6d3a38661dc09"
           "d7b5a700000000a50000002915c2e4582d2a2a0994385303eef2427cc479c5551ba5711cd6d8410000018d00000000000000000000000"
           "000000000000000000000000000000000000000001787",
      372);
    sub_106BA8(a1, 41, 1198372);
    sub_1062CC(a1, 42, ptr);
    do
      v5 = dev_ctrl();
    while ( (unsigned int)((int (__fastcall *)(_DWORD))v5[22])(*(_DWORD *)(a1 + 264)) <= 0xB9 );
    v6 = dev_ctrl();
    v11 = ((int (__fastcall *)(_DWORD, _BYTE *, int))v6[16])(*(_DWORD *)(a1 + 264), v10, 186);
    if ( ptr )
      free(ptr);
    usleep(0xC350u);
    sub_1062CC(a1, 42, ptr);
  }
  return v4;
}
