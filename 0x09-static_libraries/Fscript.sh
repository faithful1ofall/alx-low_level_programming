#!/bin/bash

# Check if the destination directory is provided as an argument
if [ $# -lt 2 ]; then
  echo "Usage: $0 destination_directory file1 file2 file3 ..."
  exit 1
fi

# Extract the destination directory from the first argument
destination_directory="$1"

# Shift the arguments to leave only the filenames
shift

# Loop through the remaining arguments (filenames) and copy them to the destination directory
for file in "$@"; do
  find ./ -type f -name "$file" -exec cp {} "$destination_directory" \;
done
