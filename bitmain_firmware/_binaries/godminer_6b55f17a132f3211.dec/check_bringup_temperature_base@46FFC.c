int __fastcall check_bringup_temperature_base(int a1)
{
  int all_created_runtime; // r9
  int v2; // r7
  int *v3; // r3
  int v4; // t1
  int v5; // r2
  int v6; // r3
  int v7; // r10
  char *v8; // r6
  int v9; // r11
  int v10; // r4
  int v11; // t1
  const char *v12; // r0
  int v13; // r8
  int *v14; // r6
  int v15; // r4
  int v16; // r2
  int v17; // r7
  _DWORD *v18; // r1
  int v19; // r0
  int v20; // r2
  int v21; // r0
  int v23; // r0
  char *v24; // r9
  char *v25; // r10
  int v26; // t1
  int v27; // r6
  int v28; // r6
  int v29; // r4
  int v30; // r2
  int v31; // r3
  double v32; // r0
  int v33; // r3
  bool v34; // cc
  int result; // r0
  double v36; // r0
  int v37; // r0
  int v38; // r0
  int v39; // r2
  _DWORD *v40; // r3
  int v41; // r0
  int v42; // r0
  int v43; // r0
  int v44; // r0
  int v46; // [sp+28h] [bp-12DCh]
  char *ptr; // [sp+2Ch] [bp-12D8h]
  int v48; // [sp+30h] [bp-12D4h]
  int *v49; // [sp+34h] [bp-12D0h]
  int v50; // [sp+34h] [bp-12D0h]
  char *s; // [sp+38h] [bp-12CCh]
  int v52; // [sp+3Ch] [bp-12C8h]
  char *v53; // [sp+40h] [bp-12C4h]
  bool v54; // [sp+44h] [bp-12C0h]
  int v55; // [sp+48h] [bp-12BCh]
  int v56; // [sp+48h] [bp-12BCh]
  int v58; // [sp+54h] [bp-12B0h]
  int v59; // [sp+54h] [bp-12B0h]
  int v60; // [sp+5Ch] [bp-12A8h] BYREF
  int v61; // [sp+60h] [bp-12A4h] BYREF
  char v62[32]; // [sp+80h] [bp-1284h] BYREF
  int v63; // [sp+A0h] [bp-1264h] BYREF
  char v64[32]; // [sp+C0h] [bp-1244h] BYREF
  int v65; // [sp+E0h] [bp-1224h] BYREF
  char v66; // [sp+100h] [bp-1204h] BYREF
  char v67; // [sp+200h] [bp-1104h] BYREF
  _DWORD v68[1025]; // [sp+300h] [bp-1004h] BYREF

  v60 = 0;
  all_created_runtime = get_all_created_runtime(&v60);
  if ( v60 > 0 )
  {
    v3 = (int *)all_created_runtime;
    v2 = 256;
    do
    {
      v4 = *v3++;
      v5 = *(_DWORD *)(v4 + 352);
      if ( v2 >= v5 )
        v2 = v5;
    }
    while ( (int *)(all_created_runtime + 4 * v60) != v3 );
    if ( v2 == 256 )
      v2 = 2;
  }
  else
  {
    v2 = 2;
  }
  ptr = (char *)calloc(v60 * v2, 8u);
  if ( ptr )
  {
    v6 = v60;
    if ( v60 > 0 )
    {
      v8 = ptr;
      v7 = 8 * v2;
      v9 = all_created_runtime - 4;
      v53 = (char *)(all_created_runtime - 4);
      v10 = 0;
      do
      {
        v11 = *(_DWORD *)(v9 + 4);
        v9 += 4;
        ++v10;
        v8 += v7;
        (*(void (**)(void))(v11 + 196))();
        usleep((__useconds_t)&loc_7A120);
        v6 = v60;
      }
      while ( v60 > v10 );
    }
    else
    {
      v7 = 8 * v2;
      v53 = (char *)(all_created_runtime - 4);
    }
    v54 = v2 <= 5;
    if ( v2 <= 0 )
    {
      if ( v6 != 1 || v2 > 5 )
      {
        v48 = 0;
        v46 = 0;
        goto LABEL_29;
      }
      goto LABEL_57;
    }
    v12 = "pcb temp out: %d";
    v58 = v2;
    v13 = 0;
    v55 = 24 * v2;
    v46 = 0;
    v48 = 0;
    v49 = (int *)ptr;
    while ( v6 <= 0 )
    {
LABEL_24:
      v13 += 24;
      v49 += 2;
      if ( v55 == v13 )
      {
        v2 = v58;
        if ( v6 != 1 || !v54 )
        {
LABEL_29:
          if ( v6 > 0 )
          {
            v23 = (int)v53;
            v24 = ptr;
            v59 = v7;
            v25 = v53;
            s = 0;
            v50 = 0;
            v56 = 0;
            v52 = 255;
            while ( 1 )
            {
              v26 = *((_DWORD *)v25 + 1);
              v25 += 4;
              v27 = *(_DWORD *)(v26 + 344);
              if ( v2 > 0 )
                break;
LABEL_41:
              v34 = v60 <= ++v56;
              v24 += v59;
              if ( v34 )
              {
                free(ptr);
                v34 = v50 <= 0;
                if ( v50 > 0 )
                  v34 = (int)s <= 0;
                result = v34;
                if ( !v34 )
                {
                  *(_DWORD *)(a1 + 80) = v52;
                  return result;
                }
LABEL_58:
                V_LOCK(result);
                v44 = logfmt_raw((int)v68, 0x1000u);
                V_UNLOCK(v44);
                zlog(
                  g_zc,
                  "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godm"
                  "iner-origin_godminer-new/machine_runtime/machine_runtime_base.c",
                  165,
                  "check_bringup_temperature_base",
                  30,
                  229,
                  100,
                  v68);
                while ( 1 )
                  ;
              }
            }
            v28 = v27 + 20;
            v29 = 0;
            while ( 1 )
            {
LABEL_35:
              v30 = *(_DWORD *)&v24[8 * v29];
              if ( v30 == -64 )
              {
                V_LOCK(v23);
                V_INT((int)&v63, "chain");
                v37 = logfmt_raw((int)v68, 0x1000u);
                V_UNLOCK(v37);
                v38 = g_zc;
                v39 = 202;
                goto LABEL_53;
              }
              v31 = *(_DWORD *)(v28 - 8);
              if ( v31 )
                break;
              HIDWORD(v32) = v46;
              LODWORD(v32) = &v66;
              v23 = check_value_valid_with_stdd(v32, v30);
              if ( !v23 )
              {
                V_LOCK(0);
                V_INT((int)v64, "chain");
                v42 = logfmt_raw((int)v68, 0x1000u);
                V_UNLOCK(v42);
                v38 = g_zc;
                v39 = 209;
                goto LABEL_53;
              }
              v28 += 24;
              v33 = *(_DWORD *)&v24[8 * v29++];
              ++s;
              if ( v52 < v33 )
                v33 = v52;
              v52 = v33;
              if ( v2 == v29 )
                goto LABEL_41;
            }
            if ( v31 == 1 )
            {
              HIDWORD(v36) = v48;
              LODWORD(v36) = &v67;
              v23 = check_value_valid_with_stdd(v36, v30);
              if ( v23 )
              {
                ++v50;
              }
              else
              {
                V_LOCK(0);
                V_INT((int)&v65, "chain");
                v43 = logfmt_raw((int)v68, 0x1000u);
                V_UNLOCK(v43);
                v38 = g_zc;
                v39 = 217;
LABEL_53:
                v23 = zlog(
                        v38,
                        "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/buil"
                        "d/godminer-origin_godminer-new/machine_runtime/machine_runtime_base.c",
                        165,
                        "check_bringup_temperature_base",
                        30,
                        v39,
                        100,
                        v68);
              }
            }
            ++v29;
            v28 += 24;
            if ( v2 == v29 )
              goto LABEL_41;
            goto LABEL_35;
          }
        }
LABEL_57:
        free(ptr);
        goto LABEL_58;
      }
    }
    v14 = v49;
    v15 = 0;
    while ( 1 )
    {
      v16 = *v14;
      if ( *v14 != -64 )
      {
        v17 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(all_created_runtime + 4 * v15) + 344) + v13 + 12);
        if ( !v17 )
        {
          v18 = &v68[v46++];
          *(v18 - 128) = v16;
          V_LOCK(v12);
          V_INT((int)&v61, "chain");
          v19 = logfmt_raw((int)v68, 0x1000u);
          V_UNLOCK(v19);
          v20 = 177;
          v21 = g_zc;
LABEL_23:
          v12 = (const char *)zlog(
                                v21,
                                "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/de"
                                "bug/build/godminer-origin_godminer-new/machine_runtime/machine_runtime_base.c",
                                165,
                                "check_bringup_temperature_base",
                                30,
                                v20,
                                40,
                                v68);
          goto LABEL_19;
        }
        if ( v17 == 1 )
        {
          v40 = &v68[v48++];
          *(v40 - 64) = v16;
          V_LOCK(v12);
          V_INT((int)v62, "chain");
          v41 = logfmt_raw((int)v68, 0x1000u);
          V_UNLOCK(v41);
          v20 = 180;
          v21 = g_zc;
          goto LABEL_23;
        }
      }
LABEL_19:
      v6 = v60;
      ++v15;
      v14 = (int *)((char *)v14 + v7);
      if ( v60 <= v15 )
        goto LABEL_24;
    }
  }
  printf("invalid pointer(%s)!\n", "sensor_status");
  return 3;
}
