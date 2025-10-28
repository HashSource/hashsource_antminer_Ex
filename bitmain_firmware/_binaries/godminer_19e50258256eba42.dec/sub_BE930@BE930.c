int __fastcall sub_BE930(
        _DWORD *a1,
        _DWORD *a2,
        _DWORD *a3,
        _DWORD *a4,
        _DWORD *a5,
        _DWORD *a6,
        _DWORD *a7,
        _DWORD *a8,
        _DWORD *a9)
{
  int v9; // r1
  size_t v10; // r2
  int v11; // r3
  int v12; // r1
  int v13; // r2
  int v16; // [sp+88h] [bp-119Ch] BYREF
  int v17; // [sp+8Ch] [bp-1198h]
  int v18; // [sp+90h] [bp-1194h]
  int v19; // [sp+94h] [bp-1190h]
  int v20; // [sp+98h] [bp-118Ch]
  int v21; // [sp+9Ch] [bp-1188h]
  int v22; // [sp+A0h] [bp-1184h]
  int v23; // [sp+A4h] [bp-1180h]
  _DWORD *v24; // [sp+A8h] [bp-117Ch]
  _DWORD *v25; // [sp+ACh] [bp-1178h]
  _DWORD *v26; // [sp+B0h] [bp-1174h]
  _DWORD *v27; // [sp+B4h] [bp-1170h]
  _BYTE v28[40]; // [sp+BCh] [bp-1168h] BYREF
  int v29; // [sp+10BCh] [bp-168h]
  int v30; // [sp+10C0h] [bp-164h]
  size_t nmemb; // [sp+10C4h] [bp-160h]
  int v32; // [sp+10C8h] [bp-15Ch]
  int v33; // [sp+10CCh] [bp-158h]
  int v34; // [sp+10D0h] [bp-154h]
  int v35; // [sp+10D4h] [bp-150h]
  _DWORD v36[7]; // [sp+10D8h] [bp-14Ch] BYREF
  int v37; // [sp+10F4h] [bp-130h]
  _DWORD v38[7]; // [sp+10F8h] [bp-12Ch] BYREF
  int v39; // [sp+1114h] [bp-110h]
  _DWORD v40[8]; // [sp+1118h] [bp-10Ch] BYREF
  int v41; // [sp+1138h] [bp-ECh] BYREF
  int v42; // [sp+113Ch] [bp-E8h]
  int v43; // [sp+1140h] [bp-E4h]
  int v44; // [sp+1144h] [bp-E0h]
  int v45; // [sp+1148h] [bp-DCh]
  int v46; // [sp+114Ch] [bp-D8h]
  int v47; // [sp+1150h] [bp-D4h]
  int v48; // [sp+1154h] [bp-D0h]
  int v49; // [sp+1158h] [bp-CCh] BYREF
  int v50; // [sp+115Ch] [bp-C8h]
  int v51; // [sp+1160h] [bp-C4h]
  int v52; // [sp+1164h] [bp-C0h]
  int v53; // [sp+1168h] [bp-BCh]
  int v54; // [sp+116Ch] [bp-B8h]
  int v55; // [sp+1170h] [bp-B4h]
  int v56; // [sp+1174h] [bp-B0h]
  _DWORD v57[7]; // [sp+1178h] [bp-ACh] BYREF
  int v58; // [sp+1194h] [bp-90h]
  _DWORD v59[8]; // [sp+1198h] [bp-8Ch] BYREF
  int v60; // [sp+11B8h] [bp-6Ch] BYREF
  int v61; // [sp+11BCh] [bp-68h]
  int v62; // [sp+11C0h] [bp-64h]
  int v63; // [sp+11C4h] [bp-60h]
  int v64; // [sp+11C8h] [bp-5Ch]
  int v65; // [sp+11CCh] [bp-58h]
  int v66; // [sp+11D0h] [bp-54h]
  int v67; // [sp+11D4h] [bp-50h]
  int v68; // [sp+11D8h] [bp-4Ch] BYREF
  int v69; // [sp+11DCh] [bp-48h]
  int v70; // [sp+11E0h] [bp-44h]
  int v71; // [sp+11E4h] [bp-40h]
  int v72; // [sp+11E8h] [bp-3Ch]
  int v73; // [sp+11ECh] [bp-38h]
  int v74; // [sp+11F0h] [bp-34h]
  int v75; // [sp+11F4h] [bp-30h]
  int v76; // [sp+11F8h] [bp-2Ch]
  void *ptr; // [sp+11FCh] [bp-28h]
  int v78; // [sp+1200h] [bp-24h]
  int v79; // [sp+1204h] [bp-20h]
  int v80; // [sp+1208h] [bp-1Ch]
  int v81; // [sp+120Ch] [bp-18h]
  signed int i; // [sp+1210h] [bp-14h]
  int v83; // [sp+1214h] [bp-10h]

  v27 = a1;
  v26 = a2;
  v25 = a3;
  v24 = a4;
  v78 = -64;
  v79 = 0;
  v83 = 0;
  v9 = a1[107];
  v10 = a1[108];
  v11 = a1[109];
  v29 = a1[106];
  v30 = v9;
  nmemb = v10;
  v32 = v11;
  v12 = a1[111];
  v13 = a1[112];
  v33 = a1[110];
  v34 = v12;
  v35 = v13;
  ptr = calloc(nmemb, 8u);
  *v25 = -150;
  *v24 = 150;
  *a5 = -150;
  *a6 = 150;
  ((void (__fastcall *)(_DWORD *, void *))v27[57])(v27, ptr);
  for ( i = 0; i < (int)nmemb; ++i )
  {
    V_LOCK();
    sub_BE860((int)v36, (int)v27[68]);
    logfmt_raw(
      v28,
      0x1000u,
      0,
      v37,
      v36[0],
      v36[1],
      v36[2],
      v36[3],
      v36[4],
      v36[5],
      v36[6],
      v37,
      "check_temperature, local:%d, remote:%d",
      *((_DWORD *)ptr + 2 * i),
      *((_DWORD *)ptr + 2 * i + 1));
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/miner_util/miner_monitor/update_miner_status/update_temperature.c",
      193,
      "check_temperature",
      17,
      36,
      20,
      v28);
    v81 = 0;
    if ( *((_DWORD *)ptr + 2 * i) == -64 )
    {
      ++*a9;
    }
    else
    {
      v81 = 1;
      ++*a7;
      if ( *((_DWORD *)ptr + 2 * i) > *v25 )
        *v25 = *((_DWORD *)ptr + 2 * i);
      if ( *((_DWORD *)ptr + 2 * i) < *v24 )
        *v24 = *((_DWORD *)ptr + 2 * i);
    }
    v80 = 0;
    if ( *((_DWORD *)ptr + 2 * i + 1) == -64 )
    {
      ++*a9;
    }
    else
    {
      v80 = 1;
      ++*a8;
      if ( *((_DWORD *)ptr + 2 * i + 1) > *a5 )
        *a5 = *((_DWORD *)ptr + 2 * i + 1);
      if ( *((_DWORD *)ptr + 2 * i + 1) < *a6 )
        *a6 = *((_DWORD *)ptr + 2 * i + 1);
    }
    v76 = v29 + 24 * i;
    if ( v26 )
    {
      if ( *(_DWORD *)(v76 + 12) )
      {
        if ( *(_DWORD *)(v76 + 12) == 1 )
        {
          if ( v81 )
            *(_DWORD *)(v26[2] + 4 * v83) = *((_DWORD *)ptr + 2 * i);
          if ( v80 )
            *(_DWORD *)(v26[3] + 4 * v83) = *((_DWORD *)ptr + 2 * i + 1);
          ++v83;
        }
      }
      else
      {
        if ( v81 )
          *(_DWORD *)(*v26 + 4 * v79) = *((_DWORD *)ptr + 2 * i);
        if ( v80 )
          *(_DWORD *)(v26[1] + 4 * v79) = *((_DWORD *)ptr + 2 * i + 1);
        ++v79;
      }
    }
    V_LOCK();
    sub_BE860((int)v38, (int)v27[68]);
    sub_BE894((int)v40, *(int *)(v76 + 20));
    if ( v81 )
    {
      sub_BE8C8((int)&v41, *((int *)ptr + 2 * i));
    }
    else
    {
      sub_BE8C8((int)&v16, -256);
      v41 = v16;
      v42 = v17;
      v43 = v18;
      v44 = v19;
      v45 = v20;
      v46 = v21;
      v47 = v22;
      v48 = v23;
    }
    if ( v80 )
    {
      sub_BE8FC((int)&v49, *((int *)ptr + 2 * i + 1));
    }
    else
    {
      sub_BE8FC((int)&v16, -256);
      v49 = v16;
      v50 = v17;
      v51 = v18;
      v52 = v19;
      v53 = v20;
      v54 = v21;
      v55 = v22;
      v56 = v23;
    }
    logfmt_raw(
      v28,
      0x1000u,
      0,
      v39,
      v38[0],
      v38[1],
      v38[2],
      v38[3],
      v38[4],
      v38[5],
      v38[6],
      v39,
      v40[0],
      v40[1],
      v40[2],
      v40[3],
      v40[4],
      v40[5],
      v40[6],
      v40[7],
      v41,
      v42,
      v43,
      v44,
      v45,
      v46,
      v47,
      v48,
      v49,
      v50,
      v51,
      v52,
      v53,
      v54,
      v55,
      v56,
      "%s",
      "check_temperature");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/miner_util/miner_monitor/update_miner_status/update_temperature.c",
      193,
      "check_temperature",
      17,
      92,
      20,
      v28);
    V_LOCK();
    sub_BE860((int)v57, (int)v27[68]);
    sub_BE894((int)v59, *(int *)(v76 + 20));
    if ( v81 )
    {
      sub_BE8C8((int)&v60, *((int *)ptr + 2 * i));
    }
    else
    {
      sub_BE8C8((int)&v16, -256);
      v60 = v16;
      v61 = v17;
      v62 = v18;
      v63 = v19;
      v64 = v20;
      v65 = v21;
      v66 = v22;
      v67 = v23;
    }
    if ( v80 )
    {
      sub_BE8FC((int)&v68, *((int *)ptr + 2 * i + 1));
    }
    else
    {
      sub_BE8FC((int)&v16, -256);
      v68 = v16;
      v69 = v17;
      v70 = v18;
      v71 = v19;
      v72 = v20;
      v73 = v21;
      v74 = v22;
      v75 = v23;
    }
    logfmt_raw(
      v28,
      0x1000u,
      0,
      v58,
      v57[0],
      v57[1],
      v57[2],
      v57[3],
      v57[4],
      v57[5],
      v57[6],
      v58,
      v59[0],
      v59[1],
      v59[2],
      v59[3],
      v59[4],
      v59[5],
      v59[6],
      v59[7],
      v60,
      v61,
      v62,
      v63,
      v64,
      v65,
      v66,
      v67,
      v68,
      v69,
      v70,
      v71,
      v72,
      v73,
      v74,
      v75,
      "%s",
      "check_temperature");
    V_UNLOCK();
    zlog(
      g_temp_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/miner_util/miner_monitor/update_miner_status/update_temperature.c",
      193,
      "check_temperature",
      17,
      94,
      40,
      v28);
  }
  free(ptr);
  if ( *a7 == nmemb && *a8 == nmemb )
    return 0;
  else
    return -1;
}
