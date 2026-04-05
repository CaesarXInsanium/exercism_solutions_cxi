(import (rnrs))
;;; There are two things here. Data representation.
;;; The test file seems to show it being a simpe list of lists of numbers. numbers don't matter, but the lists themselves
;;; then there is the actual transpose algorithm.

(define (return x) x)
(define (transpose m)
  (if (null? m)
      (return '())
      (if (null? (car m))
	  (return '())
	  (cons (map car m)
		(transpose (map cdr m))))))

;;; this was unusually easy.
