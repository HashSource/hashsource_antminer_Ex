int __fastcall check_nonce_ltc(int a1, int a2)
{
  int v4; // [sp+Ch] [bp-1098h]
  _BYTE v7[8]; // [sp+1Ch] [bp-1088h] BYREF
  unsigned int v8; // [sp+101Ch] [bp-88h]
  _DWORD v9[8]; // [sp+1020h] [bp-84h] BYREF
  _DWORD dest[20]; // [sp+1040h] [bp-64h] BYREF
  int v11; // [sp+1090h] [bp-14h]
  unsigned int v12; // [sp+1094h] [bp-10h]
  int v13; // [sp+1098h] [bp-Ch]
  unsigned __int8 v14; // [sp+109Fh] [bp-5h]

  v11 = a2;
  v13 = *(_DWORD *)(a1 + 864);
  v12 = *(_DWORD *)(v13 + 4 * (*(unsigned __int8 *)(a2 + 85) + 4864));
  memcpy(dest, (const void *)(v13 + 80 * *(unsigned __int8 *)(a2 + 85) + 9216), sizeof(dest));
  v8 = _byteswap_ulong(*(_DWORD *)(v11 + 80));
  dest[19] = v8;
  scrypt_regenhash(v9, (int)dest);
  v14 = target_to_diff_ltc((int)v9);
  if ( v14 > 0x1Au )
  {
    if ( (*(_BYTE *)(v11 + 84) & 0x20) != 0 )
    {
      if ( v14 <= 0x2Fu )
      {
        V_LOCK();
        logfmt_raw(
          v7,
          0x1000u,
          0,
          "calculate diff %02x, but ans diff %02x (bit5 is 1)",
          v14,
          *(unsigned __int8 *)(v11 + 84));
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/backend/backend_ltc_1489/backend_ltc_1489.c",
          171,
          "check_nonce_ltc",
          15,
          713,
          20,
          v7);
        return 3;
      }
    }
    else if ( v14 != *(unsigned __int8 *)(v11 + 84) + 16 )
    {
      V_LOCK();
      logfmt_raw(v7, 0x1000u, 0, "diff not match, calculate %02x ans diff %02x", v14, *(unsigned __int8 *)(v11 + 84));
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/backend/backend_ltc_1489/backend_ltc_1489.c",
        171,
        "check_nonce_ltc",
        15,
        718,
        20,
        v7);
      return 3;
    }
    if ( v12 > v14 || (unsigned __int8)sub_1A5F98((int)v9, v13 + 32 * (*(unsigned __int8 *)(v11 + 85) + 624)) != 1 )
    {
      V_LOCK();
      logfmt_raw(v7, 0x1000u, 0, "hw diff (%d<%d) not reach pool", v14, v12);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/backend/backend_ltc_1489/backend_ltc_1489.c",
        171,
        "check_nonce_ltc",
        15,
        724,
        20,
        v7);
      return 1;
    }
    else
    {
      return 0;
    }
  }
  else
  {
    V_LOCK();
    logfmt_raw(
      v7,
      0x1000u,
      0,
      "hw error calculate diff %02x ans diff %02x TICKET_MASK_ZERO_COUNT_LTC %02x",
      v14,
      *(unsigned __int8 *)(v11 + 84),
      27,
      v4,
      a2,
      a1);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/backend_ltc_1489/backend_ltc_1489.c",
      171,
      "check_nonce_ltc",
      15,
      707,
      20,
      v7);
    return 2;
  }
}
