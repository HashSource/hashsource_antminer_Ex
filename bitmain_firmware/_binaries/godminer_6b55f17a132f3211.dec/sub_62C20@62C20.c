int __fastcall sub_62C20(int a1, char a2, int a3, char a4, int a5)
{
  int v5; // r6
  int v8; // r7
  int v9; // r6
  double v10; // r0
  __int64 v11; // r0
  int v12; // r4
  int v13; // r0
  _BYTE v16[4072]; // [sp+18h] [bp-1000h] BYREF

  if ( a3 <= 700 )
    v5 = a2 & 1;
  else
    v5 = 0;
  v8 = a5;
  if ( v5 )
  {
    v9 = a1 + 944;
    v10 = sub_122004(*(_DWORD *)(a1 + 936), *(_DWORD *)(a1 + 940), a3, &a5) / (double)a3 * *(float *)(a1 + 916);
    v11 = sub_122390(LODWORD(v10), HIDWORD(v10));
    *(_QWORD *)(v9 - 8) = v11;
    *(float *)(a1 + 916) = (float)a3;
  }
  else
  {
    V_LOCK(a1);
    v13 = logfmt_raw((int)v16, 0x1000u);
    V_UNLOCK(v13);
    LODWORD(v11) = zlog(
                     g_zc,
                     "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/g"
                     "odminer-origin_godminer-new/backend/backend_dash_1766/backend_dash_1766.c",
                     172,
                     "parameter_update_dash",
                     21,
                     900,
                     40,
                     v16);
  }
  if ( (unsigned int)(v8 - 1400) <= 0x12C )
    v12 = a4 & 1;
  else
    v12 = 0;
  if ( v12 )
    *(_DWORD *)(a1 + 920) = v8;
  return v11;
}
