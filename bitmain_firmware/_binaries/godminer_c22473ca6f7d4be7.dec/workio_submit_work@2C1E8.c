int __fastcall workio_submit_work(int a1, unsigned __int8 *a2)
{
  int v4; // r6
  int v5; // r7
  int *v6; // r8
  int v7; // r5
  int v9; // r2
  char *v10; // r1
  int v11; // r4
  _DWORD *v12; // r3
  int v13; // r1
  int v14; // r10
  int v15; // r3
  _DWORD *v16; // r3
  int v17; // r1
  int v18; // [sp+28h] [bp-1428h]
  _DWORD v19[7]; // [sp+30h] [bp-1420h] BYREF
  int v20; // [sp+4Ch] [bp-1404h]
  _DWORD v21[7]; // [sp+50h] [bp-1400h] BYREF
  int v22; // [sp+6Ch] [bp-13E4h]
  char v23[4096]; // [sp+450h] [bp-1000h] BYREF

  v4 = frontend_runtime_instance();
  v5 = pool_tget((int)a2, a2 + 2064);
  if ( v5 )
  {
    V_LOCK();
    v9 = *(_DWORD *)a2;
    LOWORD(v10) = -3560;
    HIWORD(v10) = (unsigned int)"DEVS" >> 16;
    LOWORD(v11) = -3484;
    V_INT((int)v21, v10, v9);
    HIWORD(v11) = (unsigned int)"s)" >> 16;
    logfmt_raw(v23, 0x1000u, 0, v22, v21[0], v21[1], v21[2], v21[3], v21[4], v21[5], v21[6], v22, v11);
    V_UNLOCK();
    LOWORD(v12) = -14512;
    HIWORD(v12) = (unsigned int)&unk_16B55C >> 16;
    LOWORD(v13) = -4392;
    HIWORD(v13) = (unsigned int)"ares / min): %.2f/min" >> 16;
    zlog(*v12, v13, 132, "workio_submit_work", 18, 163, 20, v23);
    return 0;
  }
  else
  {
    LOWORD(v6) = -14240;
    HIWORD(v6) = (unsigned int)&unk_16B660 >> 16;
    update_pool_diff1_of_all_runtimes((int *)a2);
    (*(void (__fastcall **)(int, unsigned __int8 *, _DWORD *))(v4 + 36))(a1, a2, v21);
    do
    {
      v7 = (*(int (__fastcall **)(unsigned __int8 *, _DWORD *))(v4 + 16))(a2, v21);
      if ( v7 )
        break;
      LOWORD(v14) = -3456;
      v15 = *v6 + 1;
      ++*((_DWORD *)a2 + 528);
      *v6 = v15;
      V_LOCK();
      V_INT((int)v19, "poolno", *(int *)a2);
      v18 = v5++;
      HIWORD(v14) = (unsigned int)"versions" >> 16;
      logfmt_raw(v23, 0x1000u, 0, v20, v19[0], v19[1], v19[2], v19[3], v19[4], v19[5], v19[6], v20, v14, 0, v18);
      V_UNLOCK();
      LOWORD(v16) = -14512;
      HIWORD(v16) = (unsigned int)&unk_16B55C >> 16;
      LOWORD(v17) = -4392;
      HIWORD(v17) = (unsigned int)"ares / min): %.2f/min" >> 16;
      zlog(*v16, v17, 132, "workio_submit_work", 18, 176, 100, v23);
    }
    while ( v5 != 4 );
    return v7;
  }
}
