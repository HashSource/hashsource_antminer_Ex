int open_dag_file()
{
  file_dag = (int)fopen(filename, "rb");
  if ( file_dag )
    return 0;
  perror("Error opening file");
  return 1;
}
