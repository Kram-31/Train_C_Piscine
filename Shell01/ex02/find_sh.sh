files=$(find -- * -name "*.sh")
for file_path in $files; do
  file_name_without_sh="${file_path%.sh}"
  echo "$file_name_without_sh"
done
