int __fastcall sub_69194(int a1, char a2, int a3, char a4, int a5)
{
  int v5; // r6
  __int64 *v8; // r6
  double v9; // r0
  __int64 v10; // r0
  int v11; // r4
  int v12; // r0
  _BYTE v15[4072]; // [sp+18h] [bp-1000h] BYREF

  if ( a3 <= 700 )
    v5 = a2 & 1;
  else
    v5 = 0;
  if ( v5 )
  {
    v8 = (__int64 *)(a1 + 944);
    v9 = sub_12E61C(*(_DWORD *)(a1 + 944), *(_DWORD *)(a1 + 948)) / (double)a3 * *(float *)(a1 + 924);
    v10 = sub_12E9A8(LODWORD(v9), HIDWORD(v9));
    *v8 = v10;
    *(float *)(a1 + 924) = (float)a3;
  }
  else
  {
    V_LOCK(a1);
    v12 = logfmt_raw((int)v15, 0x1000u);
    V_UNLOCK(v12);
    LODWORD(v10) = zlog(
                     g_zc,
                     "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/bui"
                     "ld/godminer-origin_godminer-new/backend/backend_dash_1766/backend_dash_1766.c",
                     176,
                     "parameter_update_dash",
                     21,
                     955,
                     40,
                     v15);
  }
  if ( (unsigned int)(a5 - 1400) <= 0x12C )
    v11 = a4 & 1;
  else
    v11 = 0;
  if ( v11 )
    *(_DWORD *)(a1 + 928) = a5;
  return v10;
}
