int __fastcall check_mac_done(int a1, int a2, int a3, int a4)
{
  unsigned __int8 v6; // r6
  int v7; // r0
  int v8; // r0
  int v9; // r2
  int *v10; // r12
  _DWORD *v11; // r9
  int v12; // r3
  int v13; // r1
  int v14; // r2
  int *v15; // r2
  int v16; // r3
  int v17; // r6
  int v18; // r0
  _DWORD *v19; // r4
  int v20; // r0
  int v21; // r2
  int v22; // r0
  int v23; // r0
  bool v24; // zf
  int v25; // r0
  int v26; // r0
  bool v27; // zf
  char v28; // r5
  int v29; // r0
  int v30; // r12
  int v31; // r2
  int v32; // r0
  _BOOL4 v34; // r3
  int v35; // r0
  int v36; // r0
  int v37; // r0
  int v38; // r0
  int v39; // r0
  int v40; // [sp+30h] [bp-1114h]
  _DWORD *v41; // [sp+34h] [bp-1110h]
  int v42; // [sp+44h] [bp-1100h]
  int *v44; // [sp+4Ch] [bp-10F8h]
  _DWORD v45[4]; // [sp+50h] [bp-10F4h] BYREF
  int v46; // [sp+60h] [bp-10E4h] BYREF
  char v47[32]; // [sp+80h] [bp-10C4h] BYREF
  int v48; // [sp+A0h] [bp-10A4h] BYREF
  char v49[32]; // [sp+C0h] [bp-1084h] BYREF
  int v50; // [sp+E0h] [bp-1064h] BYREF
  char v51[32]; // [sp+100h] [bp-1044h] BYREF
  int v52; // [sp+120h] [bp-1024h] BYREF
  _BYTE v53[4100]; // [sp+140h] [bp-1004h] BYREF

  v6 = a3;
  V_LOCK(a1);
  v7 = logfmt_raw((int)v53, 0x1000u);
  V_UNLOCK(v7);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/backend_eth/backend_eth.c",
    154,
    "check_mac_done",
    14,
    380,
    20,
    v53);
  sub_5C218(a1, v6, 149, 0);
  sub_5C218(a1, v6, 151, 0);
  sub_5C218(a1, v6, 153, 0);
  sub_5C218(a1, v6, 87, 255);
  sub_5C218(a1, v6, 159, 0);
  sub_5C218(a1, v6, 133, 805306367);
  if ( a4 )
  {
    if ( a4 == 1 )
    {
      sub_5C218(a1, a3, 134, 0xFFFFFFF);
      sub_5C218(a1, a3, 132, -2147483647);
    }
  }
  else
  {
    sub_5C218(a1, a3, 134, 0xFFFFFFF);
    sub_5C218(a1, a3, 132, 17);
  }
  sleep(8u);
  v8 = (int)malloc(0x600u);
  v11 = (_DWORD *)v8;
  v45[1] = 0;
  if ( a3 == 255 )
    v9 = 14;
  v45[2] = 0;
  if ( a3 == 255 )
    v10 = v45;
  v45[3] = 0;
  v45[0] = 0;
  if ( a3 == 255 )
  {
    v12 = (int)&unk_138358;
    v44 = (int *)v9;
  }
  else
  {
    v12 = 1;
  }
  if ( a3 == 255 )
  {
    v8 = *(_DWORD *)v12;
    v13 = *(_DWORD *)(v12 + 4);
    v14 = *(_DWORD *)(v12 + 8);
    v12 = *(_DWORD *)(v12 + 12);
    *v10 = v8;
    v10[1] = v13;
    v10[2] = v14;
    v10 += 3;
  }
  else
  {
    v44 = (int *)v12;
  }
  LOWORD(v15) = (unsigned __int16)"xxxxxxxxxx chip %02x core %02x mac bist not done(%08x) xxxxxxxxxxx";
  if ( a3 == 255 )
    *(_WORD *)v10 = v12;
  HIWORD(v15) = (unsigned int)"xxxxxxxxxx chip %02x core %02x mac bist not done(%08x) xxxxxxxxxxx" >> 16;
  v42 = 0;
  do
  {
    if ( a3 == 255 )
    {
      v16 = v42;
      v15 = v45;
    }
    else
    {
      v16 = a3;
    }
    if ( a3 == 255 )
      v16 = *((unsigned __int8 *)v15 + v16);
    v40 = v16;
    v17 = (unsigned __int16)v16;
    v18 = dev_ctrl(v8);
    (*(void (__fastcall **)(_DWORD))(v18 + 72))(*(_DWORD *)(a1 + 136));
    v8 = sub_5C484(a1, v17, 139, v11);
    if ( v8 > 0 )
    {
      v8 *= 3;
      v19 = v11;
      v41 = &v11[v8];
      while ( 1 )
      {
        while ( 1 )
        {
          v28 = *((_BYTE *)v19 + 4);
          if ( (*v19 & 0xFF000000) == 0xFF000000 )
            break;
          V_LOCK(v8);
          V_INT((int)&v52, "chain");
          v29 = logfmt_raw((int)v53, 0x1000u);
          V_UNLOCK(v29);
          v30 = 60;
          v31 = 485;
          v32 = g_zc;
LABEL_46:
          v19 += 3;
          v8 = zlog(
                 v32,
                 "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godmi"
                 "ner-origin_master/backend/backend_eth/backend_eth.c",
                 154,
                 "check_mac_done",
                 14,
                 v31,
                 v30,
                 v53);
          if ( v41 == v19 )
            goto LABEL_47;
        }
        if ( (unsigned __int8)*v19 == 255 )
          break;
        if ( v40 == 3 )
        {
          if ( (*v19 & 0xF0) == 0xF0 )
          {
            sub_5C6A4(a1, v28, 3, 135, v11);
            goto LABEL_33;
          }
LABEL_53:
          V_LOCK(v8);
          V_INT((int)v47, "chain");
          v35 = logfmt_raw((int)v53, 0x1000u);
          V_UNLOCK(v35);
          v21 = 444;
          v22 = g_zc;
          goto LABEL_27;
        }
        V_LOCK(v8);
        V_INT((int)&v46, "chain");
        v20 = logfmt_raw((int)v53, 0x1000u);
        V_UNLOCK(v20);
        v21 = 441;
        v22 = g_zc;
LABEL_27:
        zlog(
          v22,
          "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
          "gin_master/backend/backend_eth/backend_eth.c",
          154,
          "check_mac_done",
          14,
          v21,
          100,
          v53);
LABEL_28:
        v23 = sub_5C6A4(a1, v28, v17, 135, v11);
        if ( v23 )
        {
          v24 = *v11 == 0;
          if ( *v11 )
            v24 = v40 == 3;
          if ( !v24 )
          {
            V_LOCK(v23);
            V_INT((int)&v48, "chain");
            v38 = logfmt_raw((int)v53, 0x1000u);
            V_UNLOCK(v38);
            zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer"
              "-origin_master/backend/backend_eth/backend_eth.c",
              154,
              "check_mac_done",
              14,
              450,
              100,
              v53);
          }
        }
LABEL_33:
        v25 = sub_5C6A4(a1, v28, v17, 136, v11);
        if ( v25 && *v11 )
        {
          V_LOCK(v25);
          V_INT((int)v49, "chain");
          v37 = logfmt_raw((int)v53, 0x1000u);
          V_UNLOCK(v37);
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-o"
            "rigin_master/backend/backend_eth/backend_eth.c",
            154,
            "check_mac_done",
            14,
            459,
            100,
            v53);
        }
        v26 = sub_5C6A4(a1, v28, v17, 137, v11);
        if ( v26 )
        {
          v27 = *v11 == 0;
          if ( *v11 )
            v27 = v40 == 3;
          if ( !v27 )
          {
            V_LOCK(v26);
            V_INT((int)&v50, "chain");
            v39 = logfmt_raw((int)v53, 0x1000u);
            V_UNLOCK(v39);
            zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer"
              "-origin_master/backend/backend_eth/backend_eth.c",
              154,
              "check_mac_done",
              14,
              468,
              100,
              v53);
          }
        }
        v8 = sub_5C6A4(a1, v28, v17, 138, v11);
        if ( v8 && *v11 )
        {
          V_LOCK(v8);
          V_INT((int)v51, "chain");
          v36 = logfmt_raw((int)v53, 0x1000u);
          V_UNLOCK(v36);
          v30 = 100;
          v31 = 477;
          v32 = g_zc;
          goto LABEL_46;
        }
        v19 += 3;
        if ( v41 == v19 )
          goto LABEL_47;
      }
      v34 = (*v19 & 0xF0) != 240;
      if ( v40 != 3 )
        v34 = 0;
      if ( !v34 )
        goto LABEL_28;
      goto LABEL_53;
    }
LABEL_47:
    v15 = v44;
    v24 = v44 == (int *)++v42;
  }
  while ( !v24 );
  free(v11);
  return 0;
}
