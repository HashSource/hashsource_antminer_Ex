_DWORD *sub_1F7DAC()
{
  _DWORD *v0; // r4
  _DWORD *v1; // r0

  v0 = sub_930BC(1u, 0xCu);
  v1 = sub_93050(0xCu);
  *v1 = 0;
  v1[1] = 0;
  v1[2] = 0;
  *v0 = v1;
  v0[1] = sub_153298((int)&loc_1F7C30, (int)v0);
  return v0;
}
