int __fastcall sub_1EE01C(unsigned __int8 a1, unsigned __int8 a2, int a3, int a4)
{
  unsigned __int16 v4; // r0
  _BYTE v11[16]; // [sp+24h] [bp-1010h] BYREF
  unsigned __int16 s1; // [sp+1026h] [bp-Eh] BYREF
  int i; // [sp+1028h] [bp-Ch]
  void *dest; // [sp+102Ch] [bp-8h]

  for ( i = 0; i <= 15; ++i )
  {
    v4 = BM_CRC16((char *)(a4 + 1456 * a1 + 91 * i + 1456 * a2), 89);
    s1 = (v4 << 8) | HIBYTE(v4);
    if ( memcmp(&s1, (const void *)(a4 + 1456 * a1 + 91 * i + 1456 * a2 + 89), 2u) )
    {
      V_LOCK();
      logfmt_raw(
        v11,
        0x1000u,
        0,
        "nonce crc error, calc %04x, expected %02x%02x",
        s1,
        *(unsigned __int8 *)(a4 + 1456 * a1 + 91 * i + 1456 * a2 + 89),
        *(unsigned __int8 *)(a4 + 1456 * a1 + 91 * i + 1456 * a2 + 90));
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/backend/backend_zec_1746/backend_zec_1746.c",
        171,
        "verify_nonce_integrality_zec_1746",
        33,
        294,
        20,
        v11);
      return 11;
    }
  }
  for ( i = 0; i <= 15; ++i )
  {
    if ( i != (*(_BYTE *)(a4 + 1456 * a1 + 91 * i + 1456 * a2) & 0xF) )
    {
      V_LOCK();
      logfmt_raw(v11, 0x1000u, 0, "nonce is not continous i=%d", i);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/backend/backend_zec_1746/backend_zec_1746.c",
        171,
        "verify_nonce_integrality_zec_1746",
        33,
        303,
        20,
        v11);
      return 48;
    }
  }
  for ( i = 0; i <= 14; ++i )
  {
    if ( *(unsigned __int8 *)(a4 + 1456 * a1 + 91 * i + 1456 * a2 + 1) != *(unsigned __int8 *)(a4
                                                                                             + 1456 * a1
                                                                                             + 91 * (i + 1)
                                                                                             + 1456 * a2
                                                                                             + 1) )
    {
      V_LOCK();
      logfmt_raw(
        v11,
        0x1000u,
        0,
        "chip_addr is different %02x != %02x",
        *(unsigned __int8 *)(a4 + 1456 * a1 + 91 * i + 1456 * a2 + 1),
        *(unsigned __int8 *)(a4 + 1456 * a1 + 91 * (i + 1) + 1456 * a2 + 1));
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/backend/backend_zec_1746/backend_zec_1746.c",
        171,
        "verify_nonce_integrality_zec_1746",
        33,
        312,
        20,
        v11);
      return 48;
    }
  }
  for ( i = 0; i <= 14; ++i )
  {
    if ( *(unsigned __int8 *)(a4 + 1456 * a1 + 91 * i + 1456 * a2 + 2) != *(unsigned __int8 *)(a4
                                                                                             + 1456 * a1
                                                                                             + 91 * (i + 1)
                                                                                             + 1456 * a2
                                                                                             + 2) )
    {
      V_LOCK();
      logfmt_raw(
        v11,
        0x1000u,
        0,
        "workID is different %02x != %02x",
        *(unsigned __int8 *)(a4 + 1456 * a1 + 91 * i + 1456 * a2 + 2),
        *(unsigned __int8 *)(a4 + 1456 * a1 + 91 * (i + 1) + 1456 * a2 + 2));
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/backend/backend_zec_1746/backend_zec_1746.c",
        171,
        "verify_nonce_integrality_zec_1746",
        33,
        321,
        20,
        v11);
      return 48;
    }
  }
  for ( i = 0; i <= 14; ++i )
  {
    if ( *(unsigned __int8 *)(a4 + 1456 * a1 + 91 * i + 1456 * a2 + 3) != *(unsigned __int8 *)(a4
                                                                                             + 1456 * a1
                                                                                             + 91 * (i + 1)
                                                                                             + 1456 * a2
                                                                                             + 3) )
    {
      V_LOCK();
      logfmt_raw(
        v11,
        0x1000u,
        0,
        "nonceID is different %02x != %02x chipid=%d",
        *(unsigned __int8 *)(a4 + 1456 * a1 + 91 * i + 1456 * a2 + 3),
        *(unsigned __int8 *)(a4 + 1456 * a1 + 91 * (i + 1) + 1456 * a2 + 3),
        a1);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/backend/backend_zec_1746/backend_zec_1746.c",
        171,
        "verify_nonce_integrality_zec_1746",
        33,
        330,
        20,
        v11);
      return 48;
    }
  }
  dest = (void *)(a3 + 1357 * a1 + 1357 * a2);
  for ( i = 0; i <= 14; ++i )
  {
    memcpy(dest, (const void *)(a4 + 1456 * a1 + 91 * i + 1456 * a2 + 4), 0x55u);
    dest = (char *)dest + 85;
  }
  memcpy(dest, (const void *)(a4 + 1456 * a1 + 1456 * a2 + 1369), 0x45u);
  *(_DWORD *)(a3 + 1357 * a1 + 1357 * a2 + 1352) = *(_DWORD *)(a4 + 1456 * a1 + 1456 * a2 + 1450);
  *(_BYTE *)(a3 + 1357 * a1 + 1357 * a2 + 1344) = *(_BYTE *)(a4 + 1456 * a1 + 1456 * a2 + 1366);
  *(_BYTE *)(a3 + 1357 * a1 + 1357 * a2 + 1345) = *(_BYTE *)(a4 + 1456 * a1 + 1456 * a2 + 1367);
  *(_BYTE *)(a3 + 1357 * a1 + 1357 * a2 + 1346) = *(_BYTE *)(a4 + 1456 * a1 + 1456 * a2 + 1368);
  *(_BYTE *)(a3 + 1357 * a1 + 1357 * a2 + 1347) = *(_BYTE *)(a4 + 1456 * a1 + 1456 * a2 + 1441);
  *(_DWORD *)(a3 + 1357 * a1 + 1357 * a2 + 1344 + 4) = *(_DWORD *)(a4 + 1456 * a1 + 1456 * a2 + 1442);
  return 0;
}
