int __fastcall sub_9F308(int a1, int a2)
{
  signed int v3; // r2
  int v4; // r3
  int current_voltage; // [sp+8h] [bp-14h]
  int v8; // [sp+Ch] [bp-10h]
  int v9; // [sp+10h] [bp-Ch]
  int v10; // [sp+14h] [bp-8h]

  v10 = 0;
  v9 = 10;
  current_voltage = get_current_voltage();
  v8 = a2 - current_voltage;
  if ( a2 == current_voltage )
    return 0;
  if ( v8 < 0 )
    v9 = -10;
  while ( 1 )
  {
    v3 = abs32(v8);
    v4 = v9;
    if ( v9 < 0 )
      v4 = -v9;
    if ( v3 <= v4 )
      break;
    current_voltage += v9;
    v8 -= v9;
    v10 = set_voltage_MP2973(current_voltage);
  }
  if ( a2 != current_voltage )
    v10 = set_voltage_MP2973(a2);
  set_current_voltage(a2);
  return v10;
}
