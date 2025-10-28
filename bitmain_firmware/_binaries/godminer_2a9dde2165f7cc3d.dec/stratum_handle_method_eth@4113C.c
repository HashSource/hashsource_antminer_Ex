int __fastcall stratum_handle_method_eth(int (__fastcall **a1)(_DWORD, _DWORD, _DWORD), int a2, int a3)
{
  _DWORD *v5; // r0
  _DWORD *v6; // r4
  int v7; // r0
  int v8; // r8
  _DWORD *v9; // r0
  int v10; // r5
  bool v11; // zf
  unsigned int *v12; // r3
  unsigned int v13; // r2
  unsigned int v14; // r2
  _DWORD *v16; // r0
  const char *v17; // r8
  int v18; // r9
  int v19; // r0
  int v20; // r0
  __int64 v21; // r10
  int v22; // r0
  _BYTE *v23; // r1
  _QWORD *v24; // r0
  char v25[92]; // [sp+14h] [bp-1100h] BYREF
  _BYTE v26[4100]; // [sp+110h] [bp-1004h] BYREF

  v5 = (_DWORD *)json_loads(a3, 0, v25);
  v6 = v5;
  if ( v5 )
  {
    v7 = json_object_get(v5, "id");
    v8 = json_integer_value(v7);
    v9 = (_DWORD *)json_object_get(v6, "result");
    v10 = *(unsigned __int8 *)(a2 + 1656);
    if ( *(_BYTE *)(a2 + 1656) )
    {
      if ( !v9 )
        goto LABEL_7;
      v11 = *v9 == 1;
      if ( *v9 == 1 )
        v11 = v8 == 0;
      if ( !v11 )
        goto LABEL_7;
      v22 = sub_3F994(v9, a2);
      goto LABEL_23;
    }
    v16 = (_DWORD *)json_object_get(v6, "method");
    v17 = (const char *)json_string_value(v16);
    if ( v17 )
    {
      v18 = json_object_get(v6, "params");
      if ( !v18 )
        v18 = json_object_get(v6, "result");
      if ( !strcasecmp(v17, "mining.notify") )
      {
        v20 = json_object_get(v6, "height");
        v21 = json_integer_value(v20);
        if ( v21 )
        {
          v24 = *(_QWORD **)(a2 + 1588);
          if ( !v24 )
          {
            v24 = calloc(1u, 0x6Bu);
            *(_DWORD *)(a2 + 1588) = v24;
            if ( !v24 )
            {
              printf(aInvalidPointer, "work->private");
              return v10;
            }
          }
          v24[12] = v21;
        }
        v22 = a1[12](a1, a2, v18);
        goto LABEL_23;
      }
      if ( !strcasecmp(v17, "mining.set_difficulty") || !strcasecmp(v17, "mining.set_target") )
      {
        v10 = a1[14](a1, a2, v18);
        goto LABEL_8;
      }
      if ( !strcasecmp(v17, "mining.set_extranonce") )
      {
        v22 = a1[13](a1, a2, v18);
LABEL_23:
        v10 = v22;
        v23 = (_BYTE *)(a2 + 1916);
        if ( v22 )
          pool_tset(a2, v23, 1);
        else
          pool_tclear(a2, v23, 0);
LABEL_8:
        if ( v6[1] != -1 )
        {
          v12 = v6 + 1;
          __dmb(0xBu);
          do
          {
            v13 = __ldrex(v12);
            v14 = v13 - 1;
          }
          while ( __strex(v14, v12) );
          if ( !v14 )
            json_delete(v6);
        }
        return v10;
      }
    }
LABEL_7:
    v10 = 0;
    goto LABEL_8;
  }
  V_LOCK(0);
  v19 = logfmt_raw((int)v26, 0x1000u);
  V_UNLOCK(v19);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
    "n_godminer-new/frontend/frontend_eth/frontend_eth.c",
    167,
    "stratum_handle_method_eth",
    25,
    685,
    100,
    v26);
  return 0;
}
