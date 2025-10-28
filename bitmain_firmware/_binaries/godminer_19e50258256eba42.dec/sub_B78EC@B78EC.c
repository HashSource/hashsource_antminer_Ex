int sub_B78EC()
{
  __int64 v0; // r0
  int v2; // [sp+8h] [bp-2Ch] BYREF
  _QWORD *v3; // [sp+Ch] [bp-28h]
  int v4; // [sp+10h] [bp-24h]
  _QWORD *v5; // [sp+14h] [bp-20h]
  int v6; // [sp+18h] [bp-1Ch]
  int i; // [sp+1Ch] [bp-18h]

  v2 = 0;
  LODWORD(v0) = get_all_created_runtime(&v2);
  v6 = v0;
  for ( i = 0; i < v2; ++i )
  {
    LODWORD(v0) = update_hashrate(
                    *(_DWORD *)(v6 + 4 * i),
                    (int)&dword_5ADBD8[54 * *(_DWORD *)(*(_DWORD *)(v6 + 4 * i) + 264)],
                    &qword_5AE958[12 * *(_DWORD *)(*(_DWORD *)(v6 + 4 * i) + 264)]);
    v5 = (_QWORD *)v0;
    v4 = v0;
    if ( *(_QWORD *)v0 )
    {
      subject_notify_all(dword_5AEF64, *(_DWORD *)(v6 + 4 * i));
      v3 = v5;
      v0 = v5[1];
      *v5 &= ~v0;
      v3[1] = 0;
    }
  }
  return v0;
}
