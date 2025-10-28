int __fastcall check_nonce_dcr(int a1, int a2)
{
  int v4; // [sp+Ch] [bp-10F8h]
  _BYTE v7[40]; // [sp+1Ch] [bp-10E8h] BYREF
  _BYTE v8[32]; // [sp+101Ch] [bp-E8h] BYREF
  _DWORD s[45]; // [sp+103Ch] [bp-C8h] BYREF
  unsigned __int8 v10; // [sp+10F3h] [bp-11h]
  int v11; // [sp+10F4h] [bp-10h]
  unsigned int v12; // [sp+10F8h] [bp-Ch]
  int v13; // [sp+10FCh] [bp-8h]

  v11 = a2;
  v13 = *(_DWORD *)(a1 + 864);
  v12 = *(_DWORD *)(v13 + 4 * (*(unsigned __int8 *)(a2 + 65) + 7040));
  memset(s, 0, sizeof(s));
  memcpy(s, (const void *)(v13 + 180 * *(unsigned __int8 *)(v11 + 65) + 5120), 0x8Cu);
  s[35] = *(_DWORD *)(v11 + 48);
  memcpy(&s[36], (const void *)(v11 + 52), 0xCu);
  memcpy(&s[39], (const void *)(v13 + 180 * *(unsigned __int8 *)(v11 + 65) + 5271), 0x18u);
  decred_hash((int)v8, (char *)s);
  v10 = target_to_diff_dcr((int)v8);
  if ( v10 > 0x26u )
  {
    if ( v10 == *(unsigned __int8 *)(v11 + 64) || v12 <= v10 )
    {
      if ( v12 > v10 || (unsigned __int8)sub_FAA74((int)v8, v13 + 32 * (*(unsigned __int8 *)(v11 + 65) + 896)) != 1 )
      {
        V_LOCK();
        logfmt_raw(v7, 0x1000u, 0, "hw diff (%d<%d) not reach pool", *(unsigned __int8 *)(v11 + 64), v12);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/backend/backend_dcr_1727/backend_dcr_1727.c",
          171,
          "check_nonce_dcr",
          15,
          591,
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
        "diff not match (%d!=%d) expected diff %d",
        v10,
        *(unsigned __int8 *)(v11 + 64),
        v12,
        v4,
        a2,
        a1);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/backend/backend_dcr_1727/backend_dcr_1727.c",
        171,
        "check_nonce_dcr",
        15,
        578,
        40,
        v7);
      return 3;
    }
  }
  else
  {
    V_LOCK();
    logfmt_raw(
      v7,
      0x1000u,
      0,
      "hw error calculate diff %d ans diff %d TICKET_MASK_DCR_1727 %d",
      v10,
      *(unsigned __int8 *)(v11 + 64),
      39,
      v4,
      a2,
      a1);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/backend_dcr_1727/backend_dcr_1727.c",
      171,
      "check_nonce_dcr",
      15,
      573,
      20,
      v7);
    return 2;
  }
}
