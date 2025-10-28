int __fastcall set_inactive_by_id(int a1)
{
  int v1; // r3
  int v3; // [sp+Ch] [bp-20h] BYREF
  int fake_regio_runtime; // [sp+10h] [bp-1Ch]
  int i; // [sp+14h] [bp-18h]
  _DWORD *all_created_runtime; // [sp+18h] [bp-14h]
  int v7; // [sp+1Ch] [bp-10h]
  int v8; // [sp+20h] [bp-Ch]
  int v9; // [sp+24h] [bp-8h]

  v8 = a1;
  v7 = a1;
  v3 = 0;
  all_created_runtime = get_all_created_runtime(&v3);
  for ( i = 0; i < v3; ++i )
  {
    if ( v7 == *(_DWORD *)(all_created_runtime[i] + 264) )
    {
      v1 = all_created_runtime[i];
      goto LABEL_7;
    }
  }
  v1 = 0;
LABEL_7:
  fake_regio_runtime = v1;
  if ( !v1 )
    fake_regio_runtime = get_fake_regio_runtime(v8);
  v9 = fake_regio_runtime;
  return (*(int (__fastcall **)(int))(fake_regio_runtime + 292))(fake_regio_runtime);
}
