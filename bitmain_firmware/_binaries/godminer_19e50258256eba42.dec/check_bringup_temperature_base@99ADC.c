int __fastcall check_bringup_temperature_base(int a1)
{
  int v1; // r3
  int v3; // r1
  int v4; // r2
  int v5; // r3
  int *v6; // lr
  int v7; // r1
  int v8; // r2
  int v9; // r3
  int v10; // r3
  int v11; // r3
  int v12; // r1
  int v13; // r2
  int v14; // r3
  int *v15; // lr
  int v16; // r1
  int v17; // r2
  int v18; // r3
  _BYTE v21[40]; // [sp+34h] [bp-1328h] BYREF
  int v22; // [sp+1034h] [bp-328h]
  int v23; // [sp+1038h] [bp-324h]
  int v24; // [sp+103Ch] [bp-320h]
  int v25; // [sp+1040h] [bp-31Ch]
  int v26; // [sp+1044h] [bp-318h]
  int v27; // [sp+1048h] [bp-314h]
  int v28; // [sp+104Ch] [bp-310h]
  int v29; // [sp+1050h] [bp-30Ch]
  int v30; // [sp+1054h] [bp-308h]
  int v31; // [sp+1058h] [bp-304h]
  int v32; // [sp+105Ch] [bp-300h]
  int v33; // [sp+1060h] [bp-2FCh]
  int v34; // [sp+1064h] [bp-2F8h]
  int v35; // [sp+1068h] [bp-2F4h]
  int v36; // [sp+106Ch] [bp-2F0h] BYREF
  _DWORD v37[64]; // [sp+1070h] [bp-2ECh] BYREF
  _DWORD v38[64]; // [sp+1170h] [bp-1ECh] BYREF
  _DWORD v39[7]; // [sp+1270h] [bp-ECh] BYREF
  int v40; // [sp+128Ch] [bp-D0h]
  _DWORD v41[7]; // [sp+1290h] [bp-CCh] BYREF
  int v42; // [sp+12ACh] [bp-B0h]
  _DWORD v43[7]; // [sp+12B0h] [bp-ACh] BYREF
  int v44; // [sp+12CCh] [bp-90h]
  _DWORD v45[7]; // [sp+12D0h] [bp-8Ch] BYREF
  int v46; // [sp+12ECh] [bp-70h]
  _DWORD v47[7]; // [sp+12F0h] [bp-6Ch] BYREF
  int v48; // [sp+130Ch] [bp-50h]
  int v49; // [sp+1314h] [bp-48h]
  int v50; // [sp+1318h] [bp-44h]
  void *ptr; // [sp+131Ch] [bp-40h]
  _DWORD *all_created_runtime; // [sp+1320h] [bp-3Ch]
  int v53; // [sp+1324h] [bp-38h]
  int v54; // [sp+1328h] [bp-34h]
  int v55; // [sp+132Ch] [bp-30h]
  int v56; // [sp+1330h] [bp-2Ch]
  int v57; // [sp+1334h] [bp-28h]
  int v58; // [sp+1338h] [bp-24h]
  int v59; // [sp+133Ch] [bp-20h]
  int m; // [sp+1340h] [bp-1Ch]
  int k; // [sp+1344h] [bp-18h]
  int j; // [sp+1348h] [bp-14h]
  int i; // [sp+134Ch] [bp-10h]

  v53 = 0;
  v54 = 256;
  v55 = 255;
  v56 = 0;
  v57 = 0;
  v58 = 0;
  v59 = 0;
  v36 = 0;
  all_created_runtime = get_all_created_runtime(&v36);
  for ( i = 0; i < v36; ++i )
  {
    v1 = *(_DWORD *)(all_created_runtime[i] + 432);
    if ( v54 < v1 )
      v1 = v54;
    v54 = v1;
  }
  if ( v54 == 256 )
    v54 = 2;
  ptr = calloc(v54 * v36, 8u);
  if ( ptr )
  {
    for ( i = 0; i < v36; ++i )
    {
      (*(void (__fastcall **)(_DWORD, char *))(all_created_runtime[i] + 228))(
        all_created_runtime[i],
        (char *)ptr + 8 * v54 * i);
      usleep(0x7A120u);
    }
    for ( j = 0; j < v54; ++j )
    {
      for ( i = 0; i < v36; ++i )
      {
        v3 = *(_DWORD *)(all_created_runtime[i] + 428);
        v4 = *(_DWORD *)(all_created_runtime[i] + 432);
        v5 = *(_DWORD *)(all_created_runtime[i] + 436);
        v6 = (int *)(all_created_runtime[i] + 440);
        v29 = *(_DWORD *)(all_created_runtime[i] + 424);
        v30 = v3;
        v31 = v4;
        v32 = v5;
        v7 = v6[1];
        v8 = v6[2];
        v33 = *v6;
        v34 = v7;
        v35 = v8;
        v49 = v29 + 24 * j;
        if ( *((_DWORD *)ptr + 2 * v54 * i + 2 * j) != -64 )
        {
          if ( *(_DWORD *)(v49 + 12) )
          {
            if ( *(_DWORD *)(v49 + 12) == 1 )
            {
              v10 = v57++;
              v37[v10] = *((_DWORD *)ptr + 2 * v54 * i + 2 * j);
              V_LOCK();
              sub_98BB8((int)v41, *(int *)(all_created_runtime[i] + 272));
              logfmt_raw(
                v21,
                0x1000u,
                0,
                v42,
                v41[0],
                v41[1],
                v41[2],
                v41[3],
                v41[4],
                v41[5],
                v41[6],
                v42,
                "pcb temp out: %d",
                *((_DWORD *)ptr + 2 * v54 * i + 2 * j));
              V_UNLOCK();
              zlog(
                g_zc,
                "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godmi"
                "ner-origin_godminer-new/machine_runtime/machine_runtime_base.c",
                166,
                "check_bringup_temperature_base",
                30,
                268,
                20,
                v21);
            }
          }
          else
          {
            v9 = v56++;
            v38[v9] = *((_DWORD *)ptr + 2 * v54 * i + 2 * j);
            V_LOCK();
            sub_98BB8((int)v39, *(int *)(all_created_runtime[i] + 272));
            logfmt_raw(
              v21,
              0x1000u,
              0,
              v40,
              v39[0],
              v39[1],
              v39[2],
              v39[3],
              v39[4],
              v39[5],
              v39[6],
              v40,
              "pcb temp in: %d",
              *((_DWORD *)ptr + 2 * v54 * i + 2 * j));
            V_UNLOCK();
            zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godmine"
              "r-origin_godminer-new/machine_runtime/machine_runtime_base.c",
              166,
              "check_bringup_temperature_base",
              30,
              265,
              20,
              v21);
          }
        }
      }
    }
    if ( v36 == 1 && v54 <= 5 )
    {
      for ( k = 0; k < v56; ++k )
      {
        v11 = v38[k];
        if ( v55 < v11 )
          v11 = v55;
        v55 = v11;
      }
    }
    else
    {
      for ( i = 0; i < v36; ++i )
      {
        v12 = *(_DWORD *)(all_created_runtime[i] + 428);
        v13 = *(_DWORD *)(all_created_runtime[i] + 432);
        v14 = *(_DWORD *)(all_created_runtime[i] + 436);
        v15 = (int *)(all_created_runtime[i] + 440);
        v22 = *(_DWORD *)(all_created_runtime[i] + 424);
        v23 = v12;
        v24 = v13;
        v25 = v14;
        v16 = v15[1];
        v17 = v15[2];
        v26 = *v15;
        v27 = v16;
        v28 = v17;
        for ( m = 0; m < v54; ++m )
        {
          if ( *((_DWORD *)ptr + 2 * v54 * i + 2 * m) == -64 )
          {
            V_LOCK();
            sub_98BB8((int)v43, *(int *)(all_created_runtime[i] + 272));
            logfmt_raw(
              v21,
              0x1000u,
              0,
              v44,
              v43[0],
              v43[1],
              v43[2],
              v43[3],
              v43[4],
              v43[5],
              v43[6],
              v44,
              "sensor_addr %02x, J0:6",
              *(_DWORD *)(v22 + 24 * m + 20));
            V_UNLOCK();
            zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godmine"
              "r-origin_godminer-new/machine_runtime/machine_runtime_base.c",
              166,
              "check_bringup_temperature_base",
              30,
              290,
              100,
              v21);
          }
          else
          {
            v50 = v22 + 24 * m;
            if ( *(_DWORD *)(v50 + 12) )
            {
              if ( *(_DWORD *)(v50 + 12) == 1 )
              {
                if ( check_value_valid_with_stdd((int)v37, v57, *((_DWORD *)ptr + 2 * v54 * i + 2 * m)) )
                {
                  ++v59;
                }
                else
                {
                  V_LOCK();
                  sub_98BB8((int)v47, *(int *)(all_created_runtime[i] + 272));
                  logfmt_raw(
                    v21,
                    0x1000u,
                    0,
                    v48,
                    v47[0],
                    v47[1],
                    v47[2],
                    v47[3],
                    v47[4],
                    v47[5],
                    v47[6],
                    v48,
                    "sensor_addr %02x, J0:6",
                    *(_DWORD *)(v50 + 20));
                  V_UNLOCK();
                  zlog(
                    g_zc,
                    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/g"
                    "odminer-origin_godminer-new/machine_runtime/machine_runtime_base.c",
                    166,
                    "check_bringup_temperature_base",
                    30,
                    305,
                    100,
                    v21);
                }
              }
            }
            else if ( check_value_valid_with_stdd((int)v38, v56, *((_DWORD *)ptr + 2 * v54 * i + 2 * m)) )
            {
              ++v58;
              v18 = *((_DWORD *)ptr + 2 * v54 * i + 2 * m);
              if ( v55 < v18 )
                v18 = v55;
              v55 = v18;
            }
            else
            {
              V_LOCK();
              sub_98BB8((int)v45, *(int *)(all_created_runtime[i] + 272));
              logfmt_raw(
                v21,
                0x1000u,
                0,
                v46,
                v45[0],
                v45[1],
                v45[2],
                v45[3],
                v45[4],
                v45[5],
                v45[6],
                v46,
                "sensor_addr %02x, J0:6",
                *(_DWORD *)(v50 + 20));
              V_UNLOCK();
              zlog(
                g_zc,
                "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godmi"
                "ner-origin_godminer-new/machine_runtime/machine_runtime_base.c",
                166,
                "check_bringup_temperature_base",
                30,
                297,
                100,
                v21);
            }
          }
        }
      }
    }
    free(ptr);
    if ( v58 <= 0 || v59 <= 0 )
    {
      V_LOCK();
      logfmt_raw(v21, 0x1000u, 0, "J0:6, temp sensor error, pls check it, and reboot system");
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/machine_runtime/machine_runtime_base.c",
        166,
        "check_bringup_temperature_base",
        30,
        317,
        100,
        v21);
      while ( 1 )
        ;
    }
    *(_DWORD *)(a1 + 92) = v55;
    return v53;
  }
  else
  {
    printf("invalid pointer(%s)!\n", "sensor_status");
    return 3;
  }
}
