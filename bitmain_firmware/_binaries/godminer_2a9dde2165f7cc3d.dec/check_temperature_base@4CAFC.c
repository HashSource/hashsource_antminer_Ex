int __fastcall check_temperature_base(int a1, int *a2, int *a3)
{
  int all_created_runtime; // r9
  int v4; // r11
  int *v5; // r3
  int v6; // t1
  int v7; // r2
  int v8; // r3
  char *v9; // r5
  int v10; // r8
  int v11; // r4
  int v12; // t1
  const char *v13; // r0
  int v14; // r8
  int *v15; // r5
  int v16; // r4
  int v17; // r2
  int v18; // r7
  _DWORD *v19; // r1
  int v20; // r0
  int v21; // r2
  int v22; // r0
  char *v23; // r7
  int v24; // r0
  int v25; // r9
  int v26; // r8
  int v27; // r3
  int v28; // r5
  int v29; // r4
  int v30; // r2
  int v31; // r3
  double v32; // r0
  int v33; // r3
  bool v34; // cc
  double v36; // r0
  int v37; // r0
  int v38; // r2
  int v39; // r0
  int v40; // r0
  int v41; // r0
  _DWORD *v42; // r3
  int v43; // r0
  int v44; // [sp+28h] [bp-12DCh]
  int *v45; // [sp+2Ch] [bp-12D8h]
  int v46; // [sp+2Ch] [bp-12D8h]
  char *s; // [sp+30h] [bp-12D4h]
  int v48; // [sp+38h] [bp-12CCh]
  int v49; // [sp+44h] [bp-12C0h]
  char *ptr; // [sp+4Ch] [bp-12B8h]
  int v53; // [sp+5Ch] [bp-12A8h] BYREF
  int v54; // [sp+60h] [bp-12A4h] BYREF
  char v55[32]; // [sp+80h] [bp-1284h] BYREF
  int v56; // [sp+A0h] [bp-1264h] BYREF
  char v57[32]; // [sp+C0h] [bp-1244h] BYREF
  int v58; // [sp+E0h] [bp-1224h] BYREF
  char v59; // [sp+100h] [bp-1204h] BYREF
  char v60; // [sp+200h] [bp-1104h] BYREF
  _DWORD v61[1025]; // [sp+300h] [bp-1004h] BYREF

  v53 = 0;
  all_created_runtime = get_all_created_runtime(&v53);
  if ( v53 > 0 )
  {
    v5 = (int *)all_created_runtime;
    v4 = 256;
    do
    {
      v6 = *v5++;
      v7 = *(_DWORD *)(v6 + 364);
      if ( v4 >= v7 )
        v4 = v7;
    }
    while ( (int *)(all_created_runtime + 4 * v53) != v5 );
    if ( v4 == 256 )
      v4 = 2;
  }
  else
  {
    v4 = 2;
  }
  ptr = (char *)calloc(v53 * v4, 8u);
  if ( ptr )
  {
    v8 = v53;
    if ( v53 <= 0 )
    {
      if ( v4 > 0 )
      {
        v49 = 8 * v4;
        goto LABEL_14;
      }
    }
    else
    {
      v9 = ptr;
      v10 = all_created_runtime - 4;
      v11 = 0;
      v49 = 8 * v4;
      do
      {
        v12 = *(_DWORD *)(v10 + 4);
        v10 += 4;
        ++v11;
        v9 += 8 * v4;
        (*(void (**)(void))(v12 + 204))();
        usleep((__useconds_t)&loc_7A120);
        v8 = v53;
      }
      while ( v53 > v11 );
      if ( v4 > 0 )
      {
LABEL_14:
        v13 = "pcb temp out: %d";
        v14 = 0;
        v44 = 0;
        v48 = 0;
        v45 = (int *)ptr;
        while ( v8 <= 0 )
        {
LABEL_23:
          v14 += 24;
          v45 += 2;
          if ( 24 * v4 == v14 )
            goto LABEL_24;
        }
        v15 = v45;
        v16 = 0;
        while ( 1 )
        {
          v17 = *v15;
          if ( *v15 != -64 )
          {
            v18 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(all_created_runtime + 4 * v16) + 356) + v14 + 12);
            if ( !v18 )
            {
              v19 = &v61[v44++];
              *(v19 - 128) = v17;
              V_LOCK(v13);
              V_INT((int)&v54, "chain");
              v20 = logfmt_raw((int)v61, 0x1000u);
              V_UNLOCK(v20);
              v21 = 633;
              v22 = g_zc;
LABEL_22:
              v13 = (const char *)zlog(
                                    v22,
                                    "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/"
                                    "tmp/release/build/godminer-origin_godminer-new/machine_runtime/machine_runtime_base.c",
                                    169,
                                    "check_temperature_base",
                                    22,
                                    v21,
                                    20,
                                    v61);
              goto LABEL_18;
            }
            if ( v18 == 1 )
            {
              v42 = &v61[v48++];
              *(v42 - 64) = v17;
              V_LOCK(v13);
              V_INT((int)v55, "chain");
              v43 = logfmt_raw((int)v61, 0x1000u);
              V_UNLOCK(v43);
              v21 = 636;
              v22 = g_zc;
              goto LABEL_22;
            }
          }
LABEL_18:
          v8 = v53;
          ++v16;
          v15 = (int *)((char *)v15 + v49);
          if ( v53 <= v16 )
            goto LABEL_23;
        }
      }
      v44 = 0;
      v48 = 0;
LABEL_24:
      if ( v8 > 0 )
      {
        v23 = ptr;
        v24 = all_created_runtime - 4;
        v25 = 255;
        v26 = -64;
        v46 = v24;
        s = 0;
        while ( 1 )
        {
          v27 = *(_DWORD *)(v46 + 4);
          v46 += 4;
          if ( v4 > 0 )
            break;
LABEL_38:
          v34 = v53 <= (int)++s;
          v23 += v49;
          if ( v34 )
            goto LABEL_40;
        }
        v28 = *(_DWORD *)(v27 + 356) + 20;
        v29 = 0;
        while ( 1 )
        {
          v30 = *(_DWORD *)&v23[8 * v29];
          if ( v30 == -64 )
            break;
          v31 = *(_DWORD *)(v28 - 8);
          if ( !v31 )
          {
            HIDWORD(v32) = v44;
            LODWORD(v32) = &v59;
            v24 = check_value_valid_with_stdd(v32, v30);
            if ( !v24 )
            {
              V_LOCK(0);
              V_INT((int)v57, "chain");
              v41 = logfmt_raw((int)v61, 0x1000u);
              V_UNLOCK(v41);
              v38 = 654;
              v39 = g_zc;
              goto LABEL_43;
            }
            goto LABEL_33;
          }
          if ( v31 == 1 )
          {
            HIDWORD(v36) = v48;
            LODWORD(v36) = &v60;
            v24 = check_value_valid_with_stdd(v36, v30);
            if ( !v24 )
            {
              V_LOCK(0);
              V_INT((int)&v58, "chain");
              v37 = logfmt_raw((int)v61, 0x1000u);
              V_UNLOCK(v37);
              v38 = 663;
              v39 = g_zc;
LABEL_43:
              v24 = zlog(
                      v39,
                      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/bu"
                      "ild/godminer-origin_godminer-new/machine_runtime/machine_runtime_base.c",
                      169,
                      "check_temperature_base",
                      22,
                      v38,
                      100,
                      v61);
            }
LABEL_33:
            v33 = *(_DWORD *)&v23[8 * v29++];
            v28 += 24;
            if ( v25 >= v33 )
              v25 = v33;
            if ( v26 < v33 )
              v26 = v33;
            if ( v4 == v29 )
              goto LABEL_38;
          }
          else
          {
LABEL_29:
            ++v29;
            v28 += 24;
            if ( v4 == v29 )
              goto LABEL_38;
          }
        }
        V_LOCK(v24);
        V_INT((int)&v56, "chain");
        v40 = logfmt_raw((int)v61, 0x1000u);
        V_UNLOCK(v40);
        v24 = zlog(
                g_zc,
                "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/go"
                "dminer-origin_godminer-new/machine_runtime/machine_runtime_base.c",
                169,
                "check_temperature_base",
                22,
                647,
                100,
                v61);
        goto LABEL_29;
      }
    }
    v25 = 255;
    v26 = -64;
LABEL_40:
    free(ptr);
    *a2 = v25;
    *a3 = v26;
    return 0;
  }
  else
  {
    printf(aInvalidPointer, "sensor_status");
    return 3;
  }
}
