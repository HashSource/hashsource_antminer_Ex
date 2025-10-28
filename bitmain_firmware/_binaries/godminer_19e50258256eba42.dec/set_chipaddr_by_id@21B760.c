int __fastcall set_chipaddr_by_id(int a1, int a2, int a3)
{
  int v3; // r3
  int v7; // [sp+14h] [bp-20h] BYREF
  int fake_regio_runtime; // [sp+18h] [bp-1Ch]
  int i; // [sp+1Ch] [bp-18h]
  _DWORD *all_created_runtime; // [sp+20h] [bp-14h]
  int v11; // [sp+24h] [bp-10h]
  int v12; // [sp+28h] [bp-Ch]
  int v13; // [sp+2Ch] [bp-8h]

  v12 = a1;
  v11 = a1;
  v7 = 0;
  all_created_runtime = get_all_created_runtime(&v7);
  for ( i = 0; i < v7; ++i )
  {
    if ( v11 == *(_DWORD *)(all_created_runtime[i] + 264) )
    {
      v3 = all_created_runtime[i];
      goto LABEL_7;
    }
  }
  v3 = 0;
LABEL_7:
  fake_regio_runtime = v3;
  if ( !v3 )
    fake_regio_runtime = get_fake_regio_runtime(v12);
  v13 = fake_regio_runtime;
  return (*(int (__fastcall **)(int, int, int))(fake_regio_runtime + 288))(fake_regio_runtime, a2, a3);
}
