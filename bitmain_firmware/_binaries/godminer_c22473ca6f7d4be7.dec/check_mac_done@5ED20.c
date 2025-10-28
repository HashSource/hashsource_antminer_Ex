int __fastcall check_mac_done(int a1, int a2, int a3, int a4)
{
  unsigned __int8 v6; // r6
  _DWORD *v7; // r12
  int v8; // r3
  _DWORD *v9; // r9
  int v10; // r1
  int v11; // r0
  int v12; // r2
  int *v13; // r12
  unsigned __int8 *v14; // r9
  int v15; // r3
  int v16; // r1
  int v17; // r2
  int *v18; // r2
  int v19; // r3
  int v20; // r6
  int (**v21)(); // r0
  unsigned __int8 *v22; // r4
  int v23; // r10
  int v24; // r2
  int v25; // r0
  int v26; // r1
  bool v27; // zf
  bool v28; // zf
  int v29; // r5
  int v30; // r12
  int v31; // r2
  int v32; // r0
  int v33; // r1
  _BOOL4 v35; // r3
  int v36; // [sp+30h] [bp-1114h]
  unsigned __int8 *v37; // [sp+34h] [bp-1110h]
  _DWORD *v38; // [sp+38h] [bp-110Ch]
  int *v39; // [sp+40h] [bp-1104h]
  int v40; // [sp+44h] [bp-1100h]
  int *v42; // [sp+4Ch] [bp-10F8h]
  _DWORD v43[4]; // [sp+50h] [bp-10F4h] BYREF
  _DWORD v44[7]; // [sp+60h] [bp-10E4h] BYREF
  int v45; // [sp+7Ch] [bp-10C8h]
  _DWORD v46[7]; // [sp+80h] [bp-10C4h] BYREF
  int v47; // [sp+9Ch] [bp-10A8h]
  _DWORD v48[7]; // [sp+A0h] [bp-10A4h] BYREF
  int v49; // [sp+BCh] [bp-1088h]
  _DWORD v50[7]; // [sp+C0h] [bp-1084h] BYREF
  int v51; // [sp+DCh] [bp-1068h]
  _DWORD v52[7]; // [sp+E0h] [bp-1064h] BYREF
  int v53; // [sp+FCh] [bp-1048h]
  _DWORD v54[7]; // [sp+100h] [bp-1044h] BYREF
  int v55; // [sp+11Ch] [bp-1028h]
  _DWORD v56[7]; // [sp+120h] [bp-1024h] BYREF
  int v57; // [sp+13Ch] [bp-1008h]
  char v58[4100]; // [sp+140h] [bp-1004h] BYREF

  v6 = a3;
  V_LOCK();
  LOWORD(v7) = -14512;
  LOWORD(v8) = -22412;
  HIWORD(v7) = (unsigned int)&unk_16B55C >> 16;
  HIWORD(v8) = (unsigned int)&unk_139BA4 >> 16;
  v9 = v7;
  v38 = v7;
  logfmt_raw(v58, 0x1000u, 0, v8, "check_mac_done");
  V_UNLOCK();
  LOWORD(v10) = -25512;
  HIWORD(v10) = (unsigned int)"one" >> 16;
  zlog(*v9, v10, 154, "check_mac_done", 14, 380, 20, v58);
  sub_5C158(a1, v6, 149, 0);
  sub_5C158(a1, v6, 151, 0);
  sub_5C158(a1, v6, 153, 0);
  sub_5C158(a1, v6, 87, 255);
  sub_5C158(a1, v6, 159, 0);
  sub_5C158(a1, v6, 133, 805306367);
  if ( a4 )
  {
    if ( a4 == 1 )
    {
      sub_5C158(a1, a3, 134, 0xFFFFFFF);
      sub_5C158(a1, a3, 132, -2147483647);
    }
  }
  else
  {
    sub_5C158(a1, a3, 134, 0xFFFFFFF);
    sub_5C158(a1, a3, 132, 17);
  }
  sleep(8u);
  v11 = (int)malloc(0x600u);
  v14 = (unsigned __int8 *)v11;
  v43[1] = 0;
  if ( a3 == 255 )
    v12 = 14;
  v43[2] = 0;
  if ( a3 == 255 )
    v13 = v43;
  v43[3] = 0;
  v43[0] = 0;
  if ( a3 == 255 )
  {
    v15 = (int)&unk_138130;
    v42 = (int *)v12;
  }
  else
  {
    v15 = 1;
  }
  if ( a3 == 255 )
  {
    v11 = *(_DWORD *)v15;
    v16 = *(_DWORD *)(v15 + 4);
    v17 = *(_DWORD *)(v15 + 8);
    v15 = *(_DWORD *)(v15 + 12);
    *v13 = v11;
    v13[1] = v16;
    v13[2] = v17;
    v13 += 3;
  }
  else
  {
    v42 = (int *)v15;
  }
  LOWORD(v18) = -24764;
  if ( a3 == 255 )
    *(_WORD *)v13 = v15;
  HIWORD(v18) = (unsigned int)"_seq" >> 16;
  v39 = v18;
  v40 = 0;
  do
  {
    if ( a3 == 255 )
    {
      v19 = v40;
      v18 = v43;
    }
    else
    {
      v19 = a3;
    }
    if ( a3 == 255 )
      v19 = *((unsigned __int8 *)v18 + v19);
    v36 = v19;
    v20 = (unsigned __int16)v19;
    v21 = dev_ctrl(v11);
    ((void (__fastcall *)(_DWORD))v21[18])(*(_DWORD *)(a1 + 136));
    v11 = sub_5C3C4(a1, v20, 139, v14);
    if ( v11 > 0 )
    {
      v22 = v14;
      v37 = &v14[12 * v11];
      while ( 1 )
      {
        while ( 1 )
        {
          v29 = v22[4];
          if ( (*(_DWORD *)v22 & 0xFF000000) == 0xFF000000 )
            break;
          V_LOCK();
          V_INT((int)v56, "chain", *(int *)(a1 + 140));
          logfmt_raw(
            v58,
            0x1000u,
            0,
            v57,
            v56[0],
            v56[1],
            v56[2],
            v56[3],
            v56[4],
            v56[5],
            v56[6],
            v57,
            v39,
            v29,
            v22[8],
            bswap32(*(_DWORD *)v22));
          V_UNLOCK();
          v30 = 60;
          v31 = 485;
          v32 = *v38;
LABEL_46:
          LOWORD(v33) = -25512;
          HIWORD(v33) = (unsigned int)"one" >> 16;
          v22 += 12;
          v11 = zlog(v32, v33, 154, "check_mac_done", 14, v31, v30, v58);
          if ( v37 == v22 )
            goto LABEL_47;
        }
        if ( (unsigned __int8)*(_DWORD *)v22 == 255 )
          break;
        if ( v36 == 3 )
        {
          if ( (*(_DWORD *)v22 & 0xF0) == 0xF0 )
          {
            sub_5C5E4(a1, v29, 3, 135, v14);
            goto LABEL_33;
          }
LABEL_53:
          V_LOCK();
          V_INT((int)v46, "chain", *(int *)(a1 + 140));
          logfmt_raw(
            v58,
            0x1000u,
            0,
            v47,
            v46[0],
            v46[1],
            v46[2],
            v46[3],
            v46[4],
            v46[5],
            v46[6],
            v47,
            "chip %02x core %02x mac bist status %02x",
            v22[4],
            v22[8],
            *(_DWORD *)v22 & 0xF0);
          V_UNLOCK();
          v24 = 444;
          v25 = *v38;
          goto LABEL_27;
        }
        V_LOCK();
        V_INT((int)v44, "chain", *(int *)(a1 + 140));
        LOWORD(v23) = -25072;
        HIWORD(v23) = (unsigned int)"_rx_debug_reg2_one_lane" >> 16;
        logfmt_raw(
          v58,
          0x1000u,
          0,
          v45,
          v44[0],
          v44[1],
          v44[2],
          v44[3],
          v44[4],
          v44[5],
          v44[6],
          v45,
          v23,
          v22[4],
          v22[8],
          *v22);
        V_UNLOCK();
        v24 = 441;
        v25 = *v38;
LABEL_27:
        LOWORD(v26) = -25512;
        HIWORD(v26) = (unsigned int)"one" >> 16;
        zlog(v25, v26, 154, "check_mac_done", 14, v24, 100, v58);
LABEL_28:
        if ( sub_5C5E4(a1, v29, v20, 135, v14) )
        {
          v27 = *(_DWORD *)v14 == 0;
          if ( *(_DWORD *)v14 )
            v27 = v36 == 3;
          if ( !v27 )
          {
            V_LOCK();
            V_INT((int)v48, "chain", *(int *)(a1 + 140));
            logfmt_raw(
              v58,
              0x1000u,
              0,
              v49,
              v48[0],
              v48[1],
              v48[2],
              v48[3],
              v48[4],
              v48[5],
              v48[6],
              v49,
              "channel[0~3] chip %02x core %02x reg 0x87 mac bist err cnt %08x",
              v14[4],
              v14[8],
              bswap32(*(_DWORD *)v14));
            V_UNLOCK();
            zlog(
              *v38,
              "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer"
              "-origin_master/backend/backend_eth/backend_eth.c",
              154,
              "check_mac_done",
              14,
              450,
              100,
              v58);
          }
        }
LABEL_33:
        if ( sub_5C5E4(a1, v29, v20, 136, v14) && *(_DWORD *)v14 )
        {
          V_LOCK();
          V_INT((int)v50, "chain", *(int *)(a1 + 140));
          logfmt_raw(
            v58,
            0x1000u,
            0,
            v51,
            v50[0],
            v50[1],
            v50[2],
            v50[3],
            v50[4],
            v50[5],
            v50[6],
            v51,
            "channel[4~7] chip %02x core %02x reg 0x88 mac bist err cnt %08x",
            v14[4],
            v14[8],
            bswap32(*(_DWORD *)v14));
          V_UNLOCK();
          zlog(
            *v38,
            "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-o"
            "rigin_master/backend/backend_eth/backend_eth.c",
            154,
            "check_mac_done",
            14,
            459,
            100,
            v58);
        }
        if ( sub_5C5E4(a1, v29, v20, 137, v14) )
        {
          v28 = *(_DWORD *)v14 == 0;
          if ( *(_DWORD *)v14 )
            v28 = v36 == 3;
          if ( !v28 )
          {
            V_LOCK();
            V_INT((int)v52, "chain", *(int *)(a1 + 140));
            logfmt_raw(
              v58,
              0x1000u,
              0,
              v53,
              v52[0],
              v52[1],
              v52[2],
              v52[3],
              v52[4],
              v52[5],
              v52[6],
              v53,
              "channel[0~3] chip %02x core %02x reg 0x89 mac bist lost cnt %08x",
              v14[4],
              v14[8],
              bswap32(*(_DWORD *)v14));
            V_UNLOCK();
            zlog(
              *v38,
              "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer"
              "-origin_master/backend/backend_eth/backend_eth.c",
              154,
              "check_mac_done",
              14,
              468,
              100,
              v58);
          }
        }
        v11 = sub_5C5E4(a1, v29, v20, 138, v14);
        if ( v11 && *(_DWORD *)v14 )
        {
          V_LOCK();
          V_INT((int)v54, "chain", *(int *)(a1 + 140));
          logfmt_raw(
            v58,
            0x1000u,
            0,
            v55,
            v54[0],
            v54[1],
            v54[2],
            v54[3],
            v54[4],
            v54[5],
            v54[6],
            v55,
            "channel[4~7] chip %02x core %02x reg 0x8a mac bist lost cnt %08x",
            v14[4],
            v14[8],
            bswap32(*(_DWORD *)v14));
          V_UNLOCK();
          v30 = 100;
          v31 = 477;
          v32 = *v38;
          goto LABEL_46;
        }
        v22 += 12;
        if ( v37 == v22 )
          goto LABEL_47;
      }
      v35 = (*(_DWORD *)v22 & 0xF0) != 240;
      if ( v36 != 3 )
        v35 = 0;
      if ( !v35 )
        goto LABEL_28;
      goto LABEL_53;
    }
LABEL_47:
    v18 = v42;
    v27 = v42 == (int *)++v40;
  }
  while ( !v27 );
  free(v14);
  return 0;
}
