CREATE TABLE books (
  id INTEGER,
  title TEXT,
  author TEXT
);
Alter table books ADD COLUMN published_year INT;
ALTER table books rename column id to isbn;
ALTER table books drop Column author;
-- Do not modify above this line --











-- Do not modify below this line --
SELECT column_name, data_type, column_default
FROM information_schema.columns
WHERE table_name = 'books'
ORDER BY column_name;
