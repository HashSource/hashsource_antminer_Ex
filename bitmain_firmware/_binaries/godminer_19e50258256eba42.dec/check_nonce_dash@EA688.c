int __fastcall check_nonce_dash(int a1, int a2)
{
  int v4; // [sp+Ch] [bp-1098h]
  _BYTE v7[8]; // [sp+1Ch] [bp-1088h] BYREF
  _BYTE v8[32]; // [sp+101Ch] [bp-88h] BYREF
  _DWORD dest[20]; // [sp+103Ch] [bp-68h] BYREF
  unsigned __int8 v10; // [sp+108Fh] [bp-15h]
  int v11; // [sp+1090h] [bp-14h]
  int i; // [sp+1094h] [bp-10h]
  unsigned int v13; // [sp+1098h] [bp-Ch]
  int v14; // [sp+109Ch] [bp-8h]

  v11 = a2;
  ++dword_5BAB30;
  v14 = *(_DWORD *)(a1 + 864);
  v13 = *(_DWORD *)(v14 + 4 * (*(unsigned __int8 *)(a2 + 53) + 3840));
  memcpy((void *)(a2 + 54), (const void *)(v14 + 12 * *(unsigned __int8 *)(a2 + 53) + 19968), 8u);
  memcpy(dest, (const void *)(v14 + 80 * *(unsigned __int8 *)(v11 + 53) + 5120), sizeof(dest));
  for ( i = 0; i <= 19; ++i )
  {
    HIBYTE(dest[i]) = *(_BYTE *)(v14 + 80 * *(unsigned __int8 *)(v11 + 53) + 4 * i + 5120);
    BYTE2(dest[i]) = *(_BYTE *)(v14 + 80 * *(unsigned __int8 *)(v11 + 53) + 4 * i + 1 + 5120);
    BYTE1(dest[i]) = *(_BYTE *)(v14 + 80 * *(unsigned __int8 *)(v11 + 53) + 4 * i + 2 + 5120);
    LOBYTE(dest[i]) = *(_BYTE *)(v14 + 80 * *(unsigned __int8 *)(v11 + 53) + 4 * i + 3 + 5120);
  }
  dest[19] = *(_DWORD *)(v11 + 48);
  Xhash(v8, dest);
  v10 = target_to_diff_dash((int)v8);
  if ( v10 > 0x22u )
  {
    if ( v10 == *(unsigned __int8 *)(v11 + 52) || v13 <= v10 )
    {
      if ( v13 <= v10 )
      {
        return 0;
      }
      else
      {
        V_LOCK();
        logfmt_raw(v7, 0x1000u, 0, "hw diff (%d<%d) not reach pool", *(unsigned __int8 *)(v11 + 52), v13);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/backend/backend_dash_1766/backend_dash_1766.c",
          173,
          "check_nonce_dash",
          16,
          823,
          20,
          v7);
        return 1;
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
        *(unsigned __int8 *)(v11 + 52),
        v13,
        v4,
        a2,
        a1);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/backend/backend_dash_1766/backend_dash_1766.c",
        173,
        "check_nonce_dash",
        16,
        800,
        20,
        v7);
      return 3;
    }
  }
  else
  {
    ++dword_5BAB34;
    V_LOCK();
    logfmt_raw(
      v7,
      0x1000u,
      0,
      "hw error calculate diff %d ans diff %d TICKET_MASK_DASH_1766 %d",
      v10,
      *(unsigned __int8 *)(v11 + 52),
      35,
      v4,
      a2,
      a1);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/backend_dash_1766/backend_dash_1766.c",
      173,
      "check_nonce_dash",
      16,
      790,
      20,
      v7);
    return 2;
  }
}
