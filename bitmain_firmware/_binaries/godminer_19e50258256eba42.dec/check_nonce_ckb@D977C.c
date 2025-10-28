int __fastcall check_nonce_ckb(int a1, unsigned __int8 *a2)
{
  _DWORD *v2; // r12
  _DWORD *v3; // r4
  _DWORD *v4; // r5
  int v5; // r1
  int v6; // r2
  int v7; // r3
  _BYTE v12[12]; // [sp+38h] [bp-10CCh] BYREF
  _BYTE v13[32]; // [sp+1038h] [bp-CCh] BYREF
  _BYTE v14[32]; // [sp+1058h] [bp-ACh] BYREF
  _BYTE v15[16]; // [sp+1078h] [bp-8Ch] BYREF
  _DWORD v16[7]; // [sp+1088h] [bp-7Ch] BYREF
  int v17; // [sp+10A4h] [bp-60h]
  _DWORD v18[7]; // [sp+10A8h] [bp-5Ch] BYREF
  int v19; // [sp+10C4h] [bp-40h]
  _DWORD v20[7]; // [sp+10C8h] [bp-3Ch] BYREF
  int v21; // [sp+10E4h] [bp-20h]
  unsigned __int8 *v22; // [sp+10E8h] [bp-1Ch]
  unsigned int v23; // [sp+10ECh] [bp-18h]
  int v24; // [sp+10F0h] [bp-14h]
  unsigned __int8 v25; // [sp+10F7h] [bp-Dh]

  v22 = a2;
  v24 = *(_DWORD *)(a1 + 864);
  v23 = *(_DWORD *)(v24 + 4 * (a2[65] + 2816));
  v2 = (_DWORD *)(v24 + 48 * a2[65] + 5120);
  v3 = v14;
  v4 = v2 + 12;
  do
  {
    v5 = v2[1];
    v6 = v2[2];
    v7 = v2[3];
    *v3 = *v2;
    v3[1] = v5;
    v3[2] = v6;
    v3[3] = v7;
    v2 += 4;
    v3 += 4;
  }
  while ( v2 != v4 );
  memcpy(v15, v22 + 48, sizeof(v15));
  EaglesongHash((int)v13, (int)v14, 0x30u);
  v25 = QMap<tagE_LEVEL,MFaultLabel::FaultType>::empty((int)v13);
  if ( v25 > 0x26u )
  {
    if ( v25 == v22[64] || v23 <= v25 )
    {
      if ( v23 > v25 || (unsigned __int8)sub_D952C((int)v13, v24 + 32 * (v22[65] + 368)) != 1 )
      {
        V_LOCK();
        sub_CA5F0((int)v20, *(int *)(a1 + 272));
        logfmt_raw(
          v12,
          0x1000u,
          0,
          v21,
          v20[0],
          v20[1],
          v20[2],
          v20[3],
          v20[4],
          v20[5],
          v20[6],
          v21,
          "hw diff (%d<%d) not reach pool",
          v22[64],
          v23);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/backend/backend_ckb_2042/backend_ckb_2042.c",
          171,
          "check_nonce_ckb",
          15,
          590,
          20,
          v12);
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
      sub_CA5F0((int)v18, *(int *)(a1 + 272));
      logfmt_raw(
        v12,
        0x1000u,
        0,
        v19,
        v18[0],
        v18[1],
        v18[2],
        v18[3],
        v18[4],
        v18[5],
        v18[6],
        v19,
        "diff not match (%d!=%d) expected diff %d",
        v25,
        v22[64],
        v23,
        a2);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/backend/backend_ckb_2042/backend_ckb_2042.c",
        171,
        "check_nonce_ckb",
        15,
        565,
        20,
        v12);
      return 3;
    }
  }
  else
  {
    V_LOCK();
    sub_CA5F0((int)v16, *(int *)(a1 + 272));
    logfmt_raw(
      v12,
      0x1000u,
      0,
      v17,
      v16[0],
      v16[1],
      v16[2],
      v16[3],
      v16[4],
      v16[5],
      v16[6],
      v17,
      "hw error calculate diff %d ans diff %d TICKET_MASK_CKB_2042 %d",
      v25,
      v22[64],
      39,
      a2);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/backend_ckb_2042/backend_ckb_2042.c",
      171,
      "check_nonce_ckb",
      15,
      560,
      20,
      v12);
    return 2;
  }
}
