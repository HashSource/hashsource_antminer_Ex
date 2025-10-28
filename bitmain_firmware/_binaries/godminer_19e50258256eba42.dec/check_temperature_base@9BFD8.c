int __fastcall check_temperature_base(int a1, int *a2, int *a3)
{
  int v3; // r3
  int v5; // r1
  int v6; // r2
  int v7; // r3
  int *v8; // lr
  int v9; // r1
  int v10; // r2
  int v11; // r3
  int v12; // r3
  int v13; // r1
  int v14; // r2
  int v15; // r3
  int *v16; // lr
  int v17; // r1
  int v18; // r2
  int v19; // r3
  int v20; // r3
  int v21; // r3
  int v22; // r3
  _BYTE v26[40]; // [sp+3Ch] [bp-1328h] BYREF
  int v27; // [sp+103Ch] [bp-328h]
  int v28; // [sp+1040h] [bp-324h]
  int v29; // [sp+1044h] [bp-320h]
  int v30; // [sp+1048h] [bp-31Ch]
  int v31; // [sp+104Ch] [bp-318h]
  int v32; // [sp+1050h] [bp-314h]
  int v33; // [sp+1054h] [bp-310h]
  int v34; // [sp+1058h] [bp-30Ch]
  int v35; // [sp+105Ch] [bp-308h]
  int v36; // [sp+1060h] [bp-304h]
  int v37; // [sp+1064h] [bp-300h]
  int v38; // [sp+1068h] [bp-2FCh]
  int v39; // [sp+106Ch] [bp-2F8h]
  int v40; // [sp+1070h] [bp-2F4h]
  int v41; // [sp+1074h] [bp-2F0h] BYREF
  _DWORD v42[64]; // [sp+1078h] [bp-2ECh] BYREF
  _DWORD v43[64]; // [sp+1178h] [bp-1ECh] BYREF
  _DWORD v44[7]; // [sp+1278h] [bp-ECh] BYREF
  int v45; // [sp+1294h] [bp-D0h]
  _DWORD v46[7]; // [sp+1298h] [bp-CCh] BYREF
  int v47; // [sp+12B4h] [bp-B0h]
  _DWORD v48[7]; // [sp+12B8h] [bp-ACh] BYREF
  int v49; // [sp+12D4h] [bp-90h]
  _DWORD v50[7]; // [sp+12D8h] [bp-8Ch] BYREF
  int v51; // [sp+12F4h] [bp-70h]
  _DWORD v52[7]; // [sp+12F8h] [bp-6Ch] BYREF
  int v53; // [sp+1314h] [bp-50h]
  int v54; // [sp+131Ch] [bp-48h]
  int v55; // [sp+1320h] [bp-44h]
  void *ptr; // [sp+1324h] [bp-40h]
  _DWORD *all_created_runtime; // [sp+1328h] [bp-3Ch]
  int v58; // [sp+132Ch] [bp-38h]
  int k; // [sp+1330h] [bp-34h]
  int j; // [sp+1334h] [bp-30h]
  int v61; // [sp+1338h] [bp-2Ch]
  int v62; // [sp+133Ch] [bp-28h]
  int v63; // [sp+1340h] [bp-24h]
  int v64; // [sp+1344h] [bp-20h]
  int v65; // [sp+1348h] [bp-1Ch]
  int v66; // [sp+134Ch] [bp-18h]
  int i; // [sp+1350h] [bp-14h]
  int v68; // [sp+1354h] [bp-10h]

  v58 = 0;
  v61 = 256;
  v62 = 255;
  v63 = -64;
  v64 = 0;
  v65 = 0;
  v66 = 0;
  v68 = 0;
  v41 = 0;
  all_created_runtime = get_all_created_runtime(&v41);
  for ( i = 0; i < v41; ++i )
  {
    v3 = *(_DWORD *)(all_created_runtime[i] + 432);
    if ( v61 < v3 )
      v3 = v61;
    v61 = v3;
  }
  if ( v61 == 256 )
    v61 = 2;
  ptr = calloc(v61 * v41, 8u);
  if ( ptr )
  {
    for ( i = 0; i < v41; ++i )
    {
      (*(void (__fastcall **)(_DWORD, char *))(all_created_runtime[i] + 228))(
        all_created_runtime[i],
        (char *)ptr + 8 * v61 * i);
      usleep(0x7A120u);
    }
    for ( j = 0; j < v61; ++j )
    {
      for ( i = 0; i < v41; ++i )
      {
        v5 = *(_DWORD *)(all_created_runtime[i] + 428);
        v6 = *(_DWORD *)(all_created_runtime[i] + 432);
        v7 = *(_DWORD *)(all_created_runtime[i] + 436);
        v8 = (int *)(all_created_runtime[i] + 440);
        v34 = *(_DWORD *)(all_created_runtime[i] + 424);
        v35 = v5;
        v36 = v6;
        v37 = v7;
        v9 = v8[1];
        v10 = v8[2];
        v38 = *v8;
        v39 = v9;
        v40 = v10;
        v54 = v34 + 24 * j;
        if ( *((_DWORD *)ptr + 2 * v61 * i + 2 * j) != -64 )
        {
          if ( *(_DWORD *)(v54 + 12) )
          {
            if ( *(_DWORD *)(v54 + 12) == 1 )
            {
              v12 = v65++;
              v42[v12] = *((_DWORD *)ptr + 2 * v61 * i + 2 * j);
              V_LOCK();
              sub_98BB8((int)v46, *(int *)(all_created_runtime[i] + 272));
              logfmt_raw(
                v26,
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
                "pcb temp out: %d",
                *((_DWORD *)ptr + 2 * v61 * i + 2 * j));
              V_UNLOCK();
              zlog(
                g_zc,
                "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godmi"
                "ner-origin_godminer-new/machine_runtime/machine_runtime_base.c",
                166,
                "check_temperature_base",
                22,
                750,
                20,
                v26);
            }
          }
          else
          {
            v11 = v64++;
            v43[v11] = *((_DWORD *)ptr + 2 * v61 * i + 2 * j);
            V_LOCK();
            sub_98BB8((int)v44, *(int *)(all_created_runtime[i] + 272));
            logfmt_raw(
              v26,
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
              "pcb temp in: %d",
              *((_DWORD *)ptr + 2 * v61 * i + 2 * j));
            V_UNLOCK();
            zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godmine"
              "r-origin_godminer-new/machine_runtime/machine_runtime_base.c",
              166,
              "check_temperature_base",
              22,
              747,
              20,
              v26);
          }
        }
      }
    }
    for ( i = 0; i < v41; ++i )
    {
      v13 = *(_DWORD *)(all_created_runtime[i] + 428);
      v14 = *(_DWORD *)(all_created_runtime[i] + 432);
      v15 = *(_DWORD *)(all_created_runtime[i] + 436);
      v16 = (int *)(all_created_runtime[i] + 440);
      v27 = *(_DWORD *)(all_created_runtime[i] + 424);
      v28 = v13;
      v29 = v14;
      v30 = v15;
      v17 = v16[1];
      v18 = v16[2];
      v31 = *v16;
      v32 = v17;
      v33 = v18;
      for ( k = 0; k < v61; ++k )
      {
        if ( *((_DWORD *)ptr + 2 * v61 * i + 2 * k) == -64 )
        {
          V_LOCK();
          sub_98BB8((int)v48, *(int *)(all_created_runtime[i] + 272));
          logfmt_raw(
            v26,
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
            "sensor_addr %02x, J0:6",
            *(_DWORD *)(v27 + 24 * k + 20));
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-"
            "origin_godminer-new/machine_runtime/machine_runtime_base.c",
            166,
            "check_temperature_base",
            22,
            761,
            100,
            v26);
        }
        else
        {
          v55 = v27 + 24 * k;
          if ( *(_DWORD *)(v55 + 12) )
          {
            if ( *(_DWORD *)(v55 + 12) == 1 )
            {
              if ( check_value_valid_with_stdd((int)v42, v65, *((_DWORD *)ptr + 2 * v61 * i + 2 * k)) )
              {
                ++v68;
              }
              else
              {
                V_LOCK();
                sub_98BB8((int)v52, *(int *)(all_created_runtime[i] + 272));
                logfmt_raw(
                  v26,
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
                  "sensor_addr %02x, J0:6",
                  *(_DWORD *)(v55 + 20));
                V_UNLOCK();
                zlog(
                  g_zc,
                  "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/god"
                  "miner-origin_godminer-new/machine_runtime/machine_runtime_base.c",
                  166,
                  "check_temperature_base",
                  22,
                  777,
                  100,
                  v26);
              }
              v21 = *((_DWORD *)ptr + 2 * v61 * i + 2 * k);
              if ( v62 < v21 )
                v21 = v62;
              v62 = v21;
              v22 = *((_DWORD *)ptr + 2 * v61 * i + 2 * k);
              if ( v63 >= v22 )
                v22 = v63;
              v63 = v22;
            }
          }
          else
          {
            if ( check_value_valid_with_stdd((int)v43, v64, *((_DWORD *)ptr + 2 * v61 * i + 2 * k)) )
            {
              ++v66;
            }
            else
            {
              V_LOCK();
              sub_98BB8((int)v50, *(int *)(all_created_runtime[i] + 272));
              logfmt_raw(
                v26,
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
                "sensor_addr %02x, J0:6",
                *(_DWORD *)(v55 + 20));
              V_UNLOCK();
              zlog(
                g_zc,
                "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godmi"
                "ner-origin_godminer-new/machine_runtime/machine_runtime_base.c",
                166,
                "check_temperature_base",
                22,
                768,
                100,
                v26);
            }
            v19 = *((_DWORD *)ptr + 2 * v61 * i + 2 * k);
            if ( v62 < v19 )
              v19 = v62;
            v62 = v19;
            v20 = *((_DWORD *)ptr + 2 * v61 * i + 2 * k);
            if ( v63 >= v20 )
              v20 = v63;
            v63 = v20;
          }
        }
      }
    }
    free(ptr);
    *a2 = v62;
    *a3 = v63;
    return v58;
  }
  else
  {
    printf("invalid pointer(%s)!\n", "sensor_status");
    return 3;
  }
}
