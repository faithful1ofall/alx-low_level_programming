#!/bin/bash

# Check if the destination directory and initial search directory are provided as arguments
if [ $# -lt 3 ]; then
  echo "Usage: $0 initial_search_directory destination_directory file1 file2 file3 ..."
  exit 1
fi

# Extract the initial search directory and destination directory from the first and second arguments
initial_search_directory="$1"
destination_directory="$2"

# Shift the arguments to leave only the filenames
shift 2

# Loop through the remaining arguments (filenames)
for file in "$@"; do
  # Use the find command to locate the file within the initial search directory
  found_file=$(find "$initial_search_directory" -type f -name "${file%.o}.c")

  if [ -n "$found_file" ]; then
    # Copy the file with the new extension to the destination directory
    cp "$found_file" "$destination_directory"
    
    echo "Copied $found_file to $destination_directory"
  else
    echo "File with extension .c not found for $file in $initial_search_directory."
  fi
done
