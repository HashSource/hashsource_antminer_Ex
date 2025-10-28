int __fastcall check_ref_clock_ready(int a1, int a2, int a3)
{
  int v5; // r3
  _DWORD *v6; // r5
  int v7; // r1
  int v8; // r4
  char *v9; // r3
  bool v10; // zf
  int v11; // r2
  int v12; // r7
  int v13; // r1
  int v14; // r1
  unsigned __int16 v15; // r3
  _DWORD *v16; // r4
  int v17; // r0
  _DWORD *v18; // r6
  int v19; // r0
  int v20; // r12
  int v21; // r2
  int v22; // r1
  int v23; // r3
  _DWORD *v24; // r4
  int v25; // r0
  int v26; // r3
  int v27; // r9
  _DWORD *v28; // r6
  int v29; // lr
  int v30; // r0
  int v31; // r12
  int v32; // r2
  char *v33; // r4
  int v34; // r0
  int v35; // r6
  int v36; // r9
  char *v37; // r4
  int v38; // r0
  int v39; // r6
  int v40; // r9
  char *v41; // r4
  int v42; // r0
  int v43; // r6
  int v44; // r9
  char *v45; // r4
  int v46; // r0
  int v47; // r6
  int v48; // r9
  unsigned int v49; // r3
  char *s; // [sp+38h] [bp-10ECh]
  int v52; // [sp+3Ch] [bp-10E8h]
  char *v53; // [sp+3Ch] [bp-10E8h]
  char *v54; // [sp+3Ch] [bp-10E8h]
  char *v55; // [sp+3Ch] [bp-10E8h]
  char *v56; // [sp+3Ch] [bp-10E8h]
  _DWORD *ptr; // [sp+40h] [bp-10E4h]
  int v58; // [sp+44h] [bp-10E0h]
  unsigned __int16 v59; // [sp+48h] [bp-10DCh]
  char v60; // [sp+48h] [bp-10DCh]
  int v61; // [sp+4Ch] [bp-10D8h]
  unsigned int v62; // [sp+50h] [bp-10D4h]
  int i; // [sp+58h] [bp-10CCh]
  int v65; // [sp+5Ch] [bp-10C8h]
  _DWORD v66[7]; // [sp+60h] [bp-10C4h] BYREF
  int v67; // [sp+7Ch] [bp-10A8h]
  _DWORD v68[7]; // [sp+80h] [bp-10A4h] BYREF
  int v69; // [sp+9Ch] [bp-1088h]
  _DWORD v70[7]; // [sp+A0h] [bp-1084h] BYREF
  int v71; // [sp+BCh] [bp-1068h]
  _DWORD v72[7]; // [sp+C0h] [bp-1064h] BYREF
  int v73; // [sp+DCh] [bp-1048h]
  _DWORD v74[7]; // [sp+E0h] [bp-1044h] BYREF
  int v75; // [sp+FCh] [bp-1028h]
  _DWORD v76[7]; // [sp+100h] [bp-1024h] BYREF
  int v77; // [sp+11Ch] [bp-1008h]
  char v78[4100]; // [sp+120h] [bp-1004h] BYREF

  LOWORD(v6) = -14512;
  V_LOCK();
  LOWORD(v5) = -23884;
  HIWORD(v5) = (unsigned int)"lk" >> 16;
  HIWORD(v6) = (unsigned int)&unk_16B55C >> 16;
  logfmt_raw(v78, 0x1000u, 0, v5);
  V_UNLOCK();
  LOWORD(v7) = -25512;
  HIWORD(v7) = (unsigned int)"one" >> 16;
  LOWORD(v8) = -23836;
  zlog(*v6, v7, 154, "check_ref_clock_ready", 21, 8385, 60, v78);
  sub_5C100(a1, 112, 0);
  LOWORD(v9) = -7948;
  v10 = a3 == 255;
  LOWORD(v11) = -23776;
  v12 = a1;
  if ( v10 )
    v13 = 16;
  else
    v13 = 1;
  HIWORD(v9) = (unsigned int)&loc_12D594 >> 16;
  s = v9;
  HIWORD(v11) = (unsigned int)"_num" >> 16;
  v62 = v13;
  HIWORD(v8) = (unsigned int)"_cores_by_work_num" >> 16;
  v65 = v8;
  v61 = v11;
  for ( i = 0; i != 3; ++i )
  {
    V_LOCK();
    logfmt_raw(v78, 0x1000u, 0, v65, "check_ref_clock_ready", i);
    V_UNLOCK();
    LOWORD(v14) = -25512;
    HIWORD(v14) = (unsigned int)"one" >> 16;
    v59 = 0;
    zlog(*v6, v14, 154, "check_ref_clock_ready", 21, 8392, 60, v78);
    ptr = malloc(0x600u);
    do
    {
      v15 = v59;
      v16 = ptr;
      if ( a3 != 255 )
        v15 = a3;
      v60 = v15;
      v58 = v15;
      v17 = sub_5C3C4(v12, v15, 112, ptr);
      if ( v17 > 0 )
      {
        v18 = &ptr[3 * v17];
        do
        {
          if ( (*v16 & 0x9000000) == 0x9000000 )
          {
            V_LOCK();
            LOWORD(v23) = -23824;
            HIWORD(v23) = (unsigned int)"rk_num" >> 16;
            logfmt_raw(v78, 0x1000u, 0, v23, *((unsigned __int8 *)v16 + 4), *((unsigned __int8 *)v16 + 8), 112, *v16);
            V_UNLOCK();
            v19 = *v6;
            v20 = 20;
            v21 = 8400;
          }
          else
          {
            V_LOCK();
            V_INT((int)v66, s, *(int *)(v12 + 140));
            logfmt_raw(
              v78,
              0x1000u,
              0,
              v67,
              v66[0],
              v66[1],
              v66[2],
              v66[3],
              v66[4],
              v66[5],
              v66[6],
              v67,
              v61,
              *((unsigned __int8 *)v16 + 4),
              *((unsigned __int8 *)v16 + 8),
              112,
              *v16);
            V_UNLOCK();
            v19 = *v6;
            v20 = 100;
            v21 = 8403;
          }
          LOWORD(v22) = -25512;
          HIWORD(v22) = (unsigned int)"one" >> 16;
          v16 += 3;
          zlog(v19, v22, 154, "check_ref_clock_ready", 21, v21, v20, v78);
        }
        while ( v16 != v18 );
      }
      v24 = ptr;
      v25 = sub_5C3C4(v12, v58, 113, ptr);
      if ( v25 > 0 )
      {
        LOWORD(v26) = -23664;
        LOWORD(v27) = -25512;
        HIWORD(v26) = (unsigned int)"set_work_debug" >> 16;
        v28 = &ptr[3 * v25];
        v52 = v26;
        do
        {
          if ( *v24 == -1 )
          {
            V_LOCK();
            logfmt_raw(v78, 0x1000u, 0, v52, *((unsigned __int8 *)v24 + 4), *((unsigned __int8 *)v24 + 8), 113, *v24);
            V_UNLOCK();
            v30 = *v6;
            v31 = 20;
            v32 = 8413;
          }
          else
          {
            V_LOCK();
            V_INT((int)v68, s, *(int *)(v12 + 140));
            LOWORD(v29) = -23720;
            HIWORD(v29) = (unsigned int)"set_work_timeout" >> 16;
            logfmt_raw(
              v78,
              0x1000u,
              0,
              v69,
              v68[0],
              v68[1],
              v68[2],
              v68[3],
              v68[4],
              v68[5],
              v68[6],
              v69,
              v29,
              *((unsigned __int8 *)v24 + 4),
              *((unsigned __int8 *)v24 + 8),
              113,
              *v24);
            V_UNLOCK();
            v30 = *v6;
            v31 = 100;
            v32 = 8411;
          }
          HIWORD(v27) = (unsigned int)"one" >> 16;
          v24 += 3;
          zlog(v30, v27, 154, "check_ref_clock_ready", 21, v32, v31, v78);
        }
        while ( v24 != v28 );
      }
      v33 = (char *)ptr;
      v34 = sub_5C3C4(v12, v58, 114, ptr);
      if ( v34 > 0 )
      {
        LOWORD(v35) = -24144;
        LOWORD(v36) = -25512;
        v53 = (char *)&ptr[3 * v34];
        do
        {
          V_LOCK();
          v33 += 12;
          V_INT((int)v70, s, *(int *)(v12 + 140));
          HIWORD(v35) = (unsigned int)"re_id" >> 16;
          logfmt_raw(
            v78,
            0x1000u,
            0,
            v71,
            v70[0],
            v70[1],
            v70[2],
            v70[3],
            v70[4],
            v70[5],
            v70[6],
            v71,
            v35,
            (unsigned __int8)*(v33 - 8),
            (unsigned __int8)*(v33 - 4),
            114,
            *((_DWORD *)v33 - 3));
          V_UNLOCK();
          HIWORD(v36) = (unsigned int)"one" >> 16;
          zlog(*v6, v36, 154, "check_ref_clock_ready", 21, 8420, 100, v78);
        }
        while ( v53 != v33 );
      }
      v37 = (char *)ptr;
      v38 = sub_5C3C4(v12, v58, 115, ptr);
      if ( v38 > 0 )
      {
        LOWORD(v39) = -24144;
        LOWORD(v40) = -25512;
        v54 = (char *)&ptr[3 * v38];
        do
        {
          V_LOCK();
          v37 += 12;
          V_INT((int)v72, s, *(int *)(v12 + 140));
          HIWORD(v39) = (unsigned int)"re_id" >> 16;
          logfmt_raw(
            v78,
            0x1000u,
            0,
            v73,
            v72[0],
            v72[1],
            v72[2],
            v72[3],
            v72[4],
            v72[5],
            v72[6],
            v73,
            v39,
            (unsigned __int8)*(v37 - 8),
            (unsigned __int8)*(v37 - 4),
            115,
            *((_DWORD *)v37 - 3));
          V_UNLOCK();
          HIWORD(v40) = (unsigned int)"one" >> 16;
          zlog(*v6, v40, 154, "check_ref_clock_ready", 21, 8426, 100, v78);
        }
        while ( v54 != v37 );
      }
      v41 = (char *)ptr;
      v42 = sub_5C3C4(v12, v58, 116, ptr);
      if ( v42 > 0 )
      {
        LOWORD(v43) = -24144;
        LOWORD(v44) = -25512;
        v55 = (char *)&ptr[3 * v42];
        do
        {
          V_LOCK();
          v41 += 12;
          V_INT((int)v74, s, *(int *)(v12 + 140));
          HIWORD(v43) = (unsigned int)"re_id" >> 16;
          logfmt_raw(
            v78,
            0x1000u,
            0,
            v75,
            v74[0],
            v74[1],
            v74[2],
            v74[3],
            v74[4],
            v74[5],
            v74[6],
            v75,
            v43,
            (unsigned __int8)*(v41 - 8),
            (unsigned __int8)*(v41 - 4),
            116,
            *((_DWORD *)v41 - 3));
          V_UNLOCK();
          HIWORD(v44) = (unsigned int)"one" >> 16;
          zlog(*v6, v44, 154, "check_ref_clock_ready", 21, 8432, 100, v78);
        }
        while ( v55 != v41 );
      }
      v45 = (char *)ptr;
      v46 = sub_5C3C4(v12, v58, 117, ptr);
      if ( v46 > 0 )
      {
        LOWORD(v47) = -24144;
        LOWORD(v48) = -25512;
        v56 = (char *)&ptr[3 * v46];
        do
        {
          V_LOCK();
          v45 += 12;
          V_INT((int)v76, s, *(int *)(v12 + 140));
          HIWORD(v47) = (unsigned int)"re_id" >> 16;
          logfmt_raw(
            v78,
            0x1000u,
            0,
            v77,
            v76[0],
            v76[1],
            v76[2],
            v76[3],
            v76[4],
            v76[5],
            v76[6],
            v77,
            v47,
            (unsigned __int8)*(v45 - 8),
            (unsigned __int8)*(v45 - 4),
            117,
            *((_DWORD *)v45 - 3));
          V_UNLOCK();
          HIWORD(v48) = (unsigned int)"one" >> 16;
          zlog(*v6, v48, 154, "check_ref_clock_ready", 21, 8438, 100, v78);
        }
        while ( v56 != v45 );
      }
      v49 = (unsigned __int8)(v60 + 1);
      v59 = (unsigned __int8)(v60 + 1);
    }
    while ( v62 > v49 );
    free(ptr);
  }
  return 0;
}
