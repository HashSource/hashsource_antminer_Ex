int __fastcall sub_AA4FC(int a1, int *a2)
{
  __int64 v3; // r2
  int v4; // r1
  int v5; // r2
  int v6; // r3
  int v7; // r1
  int v8; // r2
  int v9; // r3
  int v13; // [sp+141Ch] [bp-90h] BYREF
  int v14; // [sp+1420h] [bp-8Ch]
  int v15; // [sp+1424h] [bp-88h]
  int v16; // [sp+1428h] [bp-84h]
  int v17; // [sp+142Ch] [bp-80h]
  int v18; // [sp+1430h] [bp-7Ch]
  int v19; // [sp+1434h] [bp-78h]
  int v20; // [sp+1438h] [bp-74h]
  _BYTE v21[32]; // [sp+143Ch] [bp-70h] BYREF
  int v22; // [sp+145Ch] [bp-50h] BYREF
  int v23; // [sp+1460h] [bp-4Ch]
  int v24; // [sp+1464h] [bp-48h]
  int v25; // [sp+1468h] [bp-44h]
  int v26; // [sp+146Ch] [bp-40h]
  int v27; // [sp+1470h] [bp-3Ch]
  int v28; // [sp+1474h] [bp-38h]
  int v29; // [sp+1478h] [bp-34h]
  int *v30; // [sp+147Ch] [bp-30h]
  int *v31; // [sp+1480h] [bp-2Ch]
  int v32; // [sp+1484h] [bp-28h]
  int v33; // [sp+1488h] [bp-24h]
  int i; // [sp+148Ch] [bp-20h]

  v33 = 0;
  v32 = *(_DWORD *)(a1 + 1132);
  if ( v32 )
  {
    pthread_mutex_lock((pthread_mutex_t *)(a2 + 398));
    memcpy((void *)(a2[75] + a2[80]), a2 + 78, a2[21]);
    v3 = *((_QWORD *)a2 + 39);
    *((_QWORD *)a2 + 39) = v3 + 1;
    *(_QWORD *)(v32 + 8) = v3;
    *(_DWORD *)v32 = a2[21];
    sub_AA428((const unsigned __int8 *)a2[75], (unsigned __int8 *)&v22, a2[74]);
    v13 = v22;
    v14 = v23;
    v15 = v24;
    v16 = v25;
    v17 = v26;
    v18 = v27;
    v19 = v28;
    v20 = v29;
    for ( i = 0; i < a2[81]; ++i )
    {
      memcpy(v21, *(const void **)(a2[82] + 4 * i), sizeof(v21));
      sub_AA428((const unsigned __int8 *)&v13, (unsigned __int8 *)&v22, 0x40u);
      v13 = v22;
      v14 = v23;
      v15 = v24;
      v16 = v25;
      v17 = v26;
      v18 = v27;
      v19 = v28;
      v20 = v29;
    }
    v30 = &v13;
    v31 = &v22;
    sub_AA474((unsigned int)&v22, (int)&v13);
    memcpy((void *)(a1 + 8), a2 + 42, 0x80u);
    v4 = v23;
    v5 = v24;
    v6 = v25;
    *(_DWORD *)(a1 + 44) = v22;
    *(_DWORD *)(a1 + 48) = v4;
    *(_DWORD *)(a1 + 52) = v5;
    *(_DWORD *)(a1 + 56) = v6;
    v7 = v27;
    v8 = v28;
    v9 = v29;
    *(_DWORD *)(a1 + 60) = v26;
    *(_DWORD *)(a1 + 64) = v7;
    *(_DWORD *)(a1 + 68) = v8;
    *(_DWORD *)(a1 + 72) = v9;
    *(_QWORD *)(a1 + 1088) = *((_QWORD *)a2 + 56);
    if ( *(_DWORD *)(a1 + 1124) )
    {
      free(*(void **)(a1 + 1124));
      *(_DWORD *)(a1 + 1124) = 0;
    }
    *(_DWORD *)(a1 + 1124) = strdup((const char *)a2[395]);
    memcpy((void *)(a1 + 1100), a2 + 89, 8u);
    *(_QWORD *)a1 = *a2;
    pthread_mutex_unlock((pthread_mutex_t *)(a2 + 398));
    return 0;
  }
  else
  {
    printf("invalid pointer(%s)!\n", "private");
    return 3;
  }
}
