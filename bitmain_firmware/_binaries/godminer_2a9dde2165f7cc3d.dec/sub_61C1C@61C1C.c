int __fastcall sub_61C1C(int a1, int *a2)
{
  int v2; // r2
  _DWORD *v3; // r6
  int *i; // r8
  int v6; // r3
  int v7; // r0
  int v8; // r1
  int v9; // r2
  int v10; // r3
  int (__fastcall *v11)(int, int *, int *, _DWORD, int, int, int, int, _DWORD); // r9
  int v12; // r0
  int v13; // r3
  int v14; // r0
  int v15; // r0
  int v16; // r2
  int v17; // r0
  int v18; // r2
  int v19; // r0
  int v20; // r0
  int *v22; // [sp+38h] [bp-109Ch]
  int v23; // [sp+40h] [bp-1094h] BYREF
  int v24; // [sp+44h] [bp-1090h] BYREF
  int v25; // [sp+48h] [bp-108Ch] BYREF
  int v26; // [sp+4Ch] [bp-1088h] BYREF
  char v27[32]; // [sp+50h] [bp-1084h] BYREF
  int v28; // [sp+70h] [bp-1064h] BYREF
  char v29[32]; // [sp+90h] [bp-1044h] BYREF
  int v30; // [sp+B0h] [bp-1024h] BYREF
  _BYTE v31[4100]; // [sp+D0h] [bp-1004h] BYREF

  v2 = *(_DWORD *)(a1 + 364);
  v3 = *(_DWORD **)(a1 + 356);
  v23 = -64;
  v24 = -64;
  if ( v2 > 0 )
  {
    v22 = &a2[2 * v2];
    for ( i = a2; v22 != i; i += 2 )
    {
      v25 = 0;
      v14 = (*(int (__fastcall **)(int, int *, int *, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))(a1 + 152))(
              a1,
              &v23,
              &v25,
              *v3,
              v3[1],
              v3[2],
              v3[3],
              v3[4],
              v3[5]);
      if ( v25 )
      {
        v6 = v23;
        if ( v23 >= -63 )
          goto LABEL_4;
        v23 = -64;
        V_LOCK(v14);
        V_INT((int)v27, "chain");
        v19 = logfmt_raw((int)v31, 0x1000u);
        V_UNLOCK(v19);
        v16 = 258;
      }
      else
      {
        v23 = -64;
        V_LOCK(v14);
        V_INT((int)&v28, "chain");
        v15 = logfmt_raw((int)v31, 0x1000u);
        V_UNLOCK(v15);
        v16 = 263;
      }
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-o"
        "rigin_godminer-new/backend/backend_ckb_2042/backend_ckb_2042.c",
        174,
        "read_temperature_ckb",
        20,
        v16,
        100,
        v31);
      v6 = v23;
LABEL_4:
      *i = v6;
      v7 = v3[1];
      v8 = v3[2];
      v9 = v3[3];
      v10 = v3[4];
      v11 = *(int (__fastcall **)(int, int *, int *, _DWORD, int, int, int, int, _DWORD))(a1 + 156);
      v26 = 0;
      v12 = v11(a1, &v24, &v26, *v3, v7, v8, v9, v10, v3[5]);
      if ( !v26 )
      {
        v24 = -64;
        V_LOCK(v12);
        V_INT((int)&v30, "chain");
        v17 = logfmt_raw((int)v31, 0x1000u);
        V_UNLOCK(v17);
        v18 = 278;
LABEL_11:
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer"
          "-origin_godminer-new/backend/backend_ckb_2042/backend_ckb_2042.c",
          174,
          "read_temperature_ckb",
          20,
          v18,
          100,
          v31);
        v13 = v24;
        goto LABEL_6;
      }
      v13 = v24;
      if ( v24 < -63 )
      {
        v24 = -64;
        V_LOCK(v12);
        V_INT((int)v29, "chain");
        v20 = logfmt_raw((int)v31, 0x1000u);
        V_UNLOCK(v20);
        v18 = 273;
        goto LABEL_11;
      }
LABEL_6:
      i[1] = v13;
      v3 += 6;
    }
  }
  return 0;
}
